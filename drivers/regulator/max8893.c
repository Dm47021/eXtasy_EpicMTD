/*
 * max8893.c
 *
 * based on max8660.c
 *
 * Copyright (C) 2009 Wolfram Sang, Pengutronix e.K.
 * Copyright (C) 2011 Google, Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/err.h>
#include <linux/i2c.h>
#include <linux/platform_device.h>
#include <linux/regulator/driver.h>
#include <linux/regulator/machine.h>
#include <linux/regulator/max8893.h>
#include <linux/slab.h>

#define DBG(fmt...)
//#define DBG(fmt...) printk(fmt)

/* Registers */
#define MAX8893_REG_ONOFF 0x00
#define MAX8893_REG_DISCHARGE  0x01
#define MAX8893_REG_LSTIME     0x02
#define MAX8893_REG_DVSRAMP    0x03
#define MAX8893_REG_BUCK       0x04
#define MAX8893_REG_LDO1       0x05
#define MAX8893_REG_LDO2       0x06
#define MAX8893_REG_LDO3       0x07
#define MAX8893_REG_LDO4       0x08
#define MAX8893_REG_LDO5       0x09

#define MAX8893_STEP		(100000)

enum {
	MAX8893_ONOFF		= 0x00,
	MAX8893_VOLTAGE_BASE	= 0x04,
};

struct max8893 {
	struct i2c_client *client;
	struct mutex lock;
	struct regulator_dev *rdev[];
};

struct max8893_desc {
	struct regulator_desc desc;
	int min_uV;
	u8 mask;
};

static struct max8893_desc *rdev_get_max8893_desc(struct regulator_dev *rdev)
{
	return container_of(rdev->desc, struct max8893_desc, desc);
}

static u8 max8893_cache_regs[] = {
	0x01, 0xFF, 0x08, 0x09, 0x02, //0x01
	0x02, 0x0E, 0x11, 0x19, 0x16, //0x05
};

struct max8893 *client_8893data_p = NULL;

static int max8893_i2c_cache_read(struct i2c_client *client, u8 reg, u8 *dest)
{
	*dest = max8893_cache_regs[reg];

	DBG("func =%s : reg = %d, value = %x\n",__func__,reg, max8893_cache_regs[reg]);

	return 0;
}

static int max8893_i2c_read(struct i2c_client *client, u8 reg, u8 *dest)
{
       int ret;

       DBG("func =%s :: Start!!!\n",__func__);

       ret = i2c_smbus_read_byte_data(client, reg);

       DBG("func =%s : i2c_smbus_read_byte_data -> return data = %d\n",__func__, ret);

       if (ret < 0)
               return -EIO;

       max8893_cache_regs[reg] = ret;

       DBG("func =%s : reg = %d, value = %x\n",__func__,reg, ret);

       *dest = ret & 0xff;
       return 0;
}

static int max8893_i2c_write(struct i2c_client *client, u8 reg, u8 value)
{
	DBG("func =%s : reg = %d, value = %x\n",__func__,reg, value); 

	max8893_cache_regs[reg] = value;
	return i2c_smbus_write_byte_data(client, reg, value);
}

static u8 max8893_read_reg(struct max8893 *max8893, u8 reg)
{

	u8 val = 0;
	DBG("func =%s called for reg= %x\n",__func__,reg);

#ifndef CONFIG_CPU_FREQ
	mutex_lock(&max8893->mutex);
#endif
	max8893_i2c_cache_read(max8893->client, reg, &val);
#ifndef CONFIG_CPU_FREQ
	mutex_unlock(&max8893->mutex);
#endif

	return val;
}

static int max8893_write_reg(struct max8893 *max8893, u8 value, u8 reg)
{

	DBG("func =%s called for reg= %x, data=%x\n",__func__,reg,value);

#ifndef CONFIG_CPU_FREQ
	mutex_lock(&max8893->mutex);
#endif

	max8893_i2c_write(max8893->client, reg, value);
#ifndef CONFIG_CPU_FREQ
	mutex_unlock(&max8893->mutex);
#endif
	return 0;
}

static const int ldo13_8893_voltage_map[] = {
	1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500,
	2600, 2700, 2800, 2900, 3000, 3100, 3200, 3300,
};

static const int ldo2_8893_voltage_map[] = {
	1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100,
	2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100,
	3200, 3300,
};

static const int ldo45_8893_voltage_map[] = {
	 800,  900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700,
	1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700,
	2800, 2900, 3000, 3100, 3200, 3300,
};

static const int buck_8893_voltage_map[] = {
	 800,  900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700,
	1800, 1900, 2000, 2100, 2200, 2300, 2400,
};

static const int *ldo_8893_voltage_map[] = {
	buck_8893_voltage_map,	/* BUCK */
	ldo13_8893_voltage_map,	/* LDO1 */
	ldo2_8893_voltage_map,	/* LDO2 */
	ldo13_8893_voltage_map,	/* LDO3 */
	ldo45_8893_voltage_map,	/* LDO4 */
	ldo45_8893_voltage_map,	/* LDO5 */
};

///////////////////////////////////////////////////////////////////////////////////////
//DIRECT APIS

int max8893_ldo_enable_direct(int ldo)
{
	struct max8893 *max8893 = client_8893data_p;
	int value, shift;

	if((ldo < MAX8893_BUCK) || (ldo > MAX8893_END))
	{
		printk("ERROR: Invalid argument passed\n");
		return -EINVAL;
	}

	DBG("func =%s called for regulator = %d\n",__func__,ldo);

    //Thomas Ryu 20100409
    //(MSB)EBUK:1, ELS:X,ELDO1:0,ELDO2:0,ELDO3:X,ELDO4:0,ELDO5:0,EUSB:X(LSB)
    if(ldo == MAX8893_BUCK)
    {
      shift = 7;
    }
    else
    {
      shift = 7 - ldo;
    }

	value = max8893_read_reg(max8893, MAX8893_REG_ONOFF);
	value |= (1 << shift);
	max8893_write_reg(max8893, value, MAX8893_REG_ONOFF);

	return 0;
}
EXPORT_SYMBOL_GPL(max8893_ldo_enable_direct);

int max8893_ldo_disable_direct(int ldo)
{
	struct max8893 *max8893 = client_8893data_p;
	int value, shift;

	if((ldo < MAX8893_BUCK) || (ldo > MAX8893_END))
	{
		printk("ERROR: Invalid argument passed\n");
		return -EINVAL;
	}

	DBG("func =%s called for regulator = %d\n",__func__,ldo);


    //Thomas Ryu 20100409
    //(MSB)EBUK:1, ELS:X,ELDO1:0,ELDO2:0,ELDO3:X,ELDO4:0,ELDO5:0,EUSB:X(LSB)
    if(ldo == MAX8893_BUCK)
    {
      shift = 7;
    }
    else
    {
      shift = 7 - ldo;
    }

	value = max8893_read_reg(max8893, MAX8893_REG_ONOFF);
	value &= ~(1 << shift);
	max8893_write_reg(max8893, value, MAX8893_REG_ONOFF);

	return 0;
}

EXPORT_SYMBOL_GPL(max8893_ldo_disable_direct);

int max8893_ldo_set_voltage_direct(int ldo,
				int min_uV, int max_uV)
{
	struct max8893 *max8893 = client_8893data_p;
	int value, shift = 0, mask = 0xff, reg;
	int min_vol = min_uV / 1000, max_vol = max_uV / 1000;
	const int *vol_map = ldo_8893_voltage_map[ldo];
	int i = 0;

	if((ldo < MAX8893_BUCK) || (ldo > MAX8893_END))
	{
		printk("ERROR: Invalid argument passed\n");
		return -EINVAL;
	}

	DBG("func =%s called for regulator = %d, min_v=%d, max_v=%d\n",__func__,ldo,min_uV,max_uV);

	if (min_vol < 800 ||
	    max_vol > 3300)
		return -EINVAL;

	while (vol_map[i]) {
		if (vol_map[i] >= min_vol)
			break;
		i++;
	}

	value = i;

	DBG("Found voltage=%d, i = %x\n",vol_map[i], i);

	if (!vol_map[i])
		return -EINVAL;

	if (vol_map[i] > max_vol)
		return -EINVAL;

	if (ldo == MAX8893_LDO1) {
		reg  = MAX8893_REG_LDO1;
	} else if (ldo == MAX8893_LDO2) {
		reg  = MAX8893_REG_LDO2;
	} else if (ldo == MAX8893_LDO3) {
		reg  = MAX8893_REG_LDO3;
	} else if (ldo == MAX8893_LDO4) {
		reg  = MAX8893_REG_LDO4;
	} else if (ldo == MAX8893_LDO5) {
		reg  = MAX8893_REG_LDO5;
	} else if (ldo == MAX8893_BUCK) {
		reg  = MAX8893_REG_BUCK;
	}

//	value = max8893_read_reg(max8893, reg);
//	value &= ~mask;
//	value |= (i << shift);
	max8893_write_reg(max8893, value, reg);

	return 0;
}

EXPORT_SYMBOL_GPL(max8893_ldo_set_voltage_direct);

static int max8893_onoff(struct regulator_dev *rdev, bool enable)
{
	struct max8893 *max8893 = rdev_get_drvdata(rdev);
	struct max8893_desc *desc = rdev_get_max8893_desc(rdev);
	int ret;
	u8 val;

	mutex_lock(&max8893->lock);
	ret = i2c_smbus_read_byte_data(max8893->client, MAX8893_ONOFF);
	if (ret < 0) {
		dev_err(&rdev->dev, "%s: i2c read failed\n", __func__);
		goto err;
	}
	val = ret;

	if (enable)
		val |= desc->mask;
	else
		val &= ~desc->mask;

	ret = i2c_smbus_write_byte_data(max8893->client, MAX8893_ONOFF, val);
	if (ret) {
		dev_err(&rdev->dev, "%s: i2c write failed\n", __func__);
		goto err;
	}
	mutex_unlock(&max8893->lock);
err:
	return ret;
}

static int max8893_enable(struct regulator_dev *rdev)
{
	return max8893_onoff(rdev, true);
}

static int max8893_disable(struct regulator_dev *rdev)
{
	return max8893_onoff(rdev, false);
}

static int max8893_is_enabled(struct regulator_dev *rdev)
{
	struct max8893 *max8893 = rdev_get_drvdata(rdev);
	struct max8893_desc *desc = rdev_get_max8893_desc(rdev);
	int val;

	val = i2c_smbus_read_byte_data(max8893->client, MAX8893_ONOFF);
	if (val < 0) {
		dev_err(&rdev->dev, "%s: i2c read failed\n", __func__);
		return val;
	}

	return !!(val & desc->mask);
}

static int max8893_list(struct regulator_dev *rdev, unsigned selector)
{
	struct max8893_desc *desc = rdev_get_max8893_desc(rdev);
	if (selector >= desc->desc.n_voltages)
		return -EINVAL;
	return desc->min_uV + selector * MAX8893_STEP;
}

static int max8893_set(struct regulator_dev *rdev, int min_uV, int max_uV,
			unsigned *selectorp)
{
	struct max8893 *max8893 = rdev_get_drvdata(rdev);
	struct max8893_desc *desc = rdev_get_max8893_desc(rdev);
	int id = rdev_get_id(rdev);
	int rmax_uV = desc->min_uV + (desc->desc.n_voltages - 1) * MAX8893_STEP;
	u8 selector;
	int ret;

	if (min_uV > rmax_uV)
		return -EINVAL;
	if (max_uV < desc->min_uV)
		return -EINVAL;

	if (min_uV < desc->min_uV)
		min_uV = desc->min_uV;
	if (max_uV > rmax_uV)
		max_uV = rmax_uV;

	selector = DIV_ROUND_UP(min_uV - desc->min_uV, MAX8893_STEP);

	ret = max8893_list(rdev, selector);
	if (ret < 0 || ret > max_uV)
		return -EINVAL;

	ret = i2c_smbus_write_byte_data(max8893->client,
					MAX8893_VOLTAGE_BASE + id, selector);
	if (ret) {
		dev_err(&rdev->dev, "%s: i2c write failed\n", __func__);
		return ret;
	}
	*selectorp = selector;

	return 0;
}

static int max8893_get(struct regulator_dev *rdev)
{
	struct max8893 *max8893 = rdev_get_drvdata(rdev);
	struct max8893_desc *desc = rdev_get_max8893_desc(rdev);
	int id = rdev_get_id(rdev);
	int selector;

	selector = i2c_smbus_read_byte_data(max8893->client,
						MAX8893_VOLTAGE_BASE + id);
	if (selector < 0) {
		dev_err(&rdev->dev, "%s: i2c read failed\n", __func__);
		return selector;
	}
	return desc->min_uV + selector * MAX8893_STEP;
}

static struct regulator_ops max8893_ops = {
	.enable = max8893_enable,
	.disable = max8893_disable,
	.is_enabled = max8893_is_enabled,
	.list_voltage = max8893_list,
	.set_voltage = max8893_set,
	.get_voltage = max8893_get,
};

static struct max8893_desc max8893_reg[] = {
	{
		.desc = {
			.name = "BUCK",
			.id = MAX8893_BUCK,
			.ops = &max8893_ops,
			.type = REGULATOR_VOLTAGE,
			.n_voltages = 0x10 + 1,
			.owner = THIS_MODULE,
		},
		.mask = BIT(7),
		.min_uV = 800000,
	},
	{
		.desc = {
			.name = "LDO1",
			.id = MAX8893_LDO1,
			.ops = &max8893_ops,
			.type = REGULATOR_VOLTAGE,
			.n_voltages = 0x11 + 1,
			.owner = THIS_MODULE,
		},
		.mask = BIT(5),
		.min_uV = 1600000,
	},
	{
		.desc = {
			.name = "LDO2",
			.id = MAX8893_LDO2,
			.ops = &max8893_ops,
			.type = REGULATOR_VOLTAGE,
			.n_voltages = 0x15 + 1,
			.owner = THIS_MODULE,
		},
		.mask = BIT(4),
		.min_uV = 1200000,
	},
	{
		.desc = {
			.name = "LDO3",
			.id = MAX8893_LDO3,
			.ops = &max8893_ops,
			.type = REGULATOR_VOLTAGE,
			.n_voltages = 0x11 + 1,
			.owner = THIS_MODULE,
		},
		.mask = BIT(3),
		.min_uV = 1600000,
	},
	{
		.desc = {
			.name = "LDO4",
			.id = MAX8893_LDO4,
			.ops = &max8893_ops,
			.type = REGULATOR_VOLTAGE,
			.n_voltages = 0x19 + 1,
			.owner = THIS_MODULE,
		},
		.mask = BIT(2),
		.min_uV = 800000,
	},
	{
		.desc = {
			.name = "LDO5",
			.id = MAX8893_LDO5,
			.ops = &max8893_ops,
			.type = REGULATOR_VOLTAGE,
			.n_voltages = 0x19 + 1,
			.owner = THIS_MODULE,
		},
		.mask = BIT(1),
		.min_uV = 800000,
	},
};


static int __devinit max8893_probe(struct i2c_client *client,
				   const struct i2c_device_id *i2c_id)
{
	struct regulator_dev **rdev;
	struct max8893_platform_data *pdata = client->dev.platform_data;
	struct max8893 *max8893;
	int i, id, ret = -EINVAL;

	if (pdata->num_subdevs > MAX8893_END) {
		dev_err(&client->dev, "Too many regulators found!\n");
		goto out;
	}

	max8893 = kzalloc(sizeof(struct max8893) +
			sizeof(struct regulator_dev *) * MAX8893_END,
			GFP_KERNEL);
	if (!max8893) {
		ret = -ENOMEM;
		goto out;
	}

	mutex_init(&max8893->lock);
	max8893->client = client;
	rdev = max8893->rdev;

	/* Finally register devices */
	for (i = 0; i < pdata->num_subdevs; i++) {

		id = pdata->subdevs[i].id;

		rdev[i] = regulator_register(&max8893_reg[id].desc,
					     &client->dev,
					     pdata->subdevs[i].initdata,
					     max8893);
		if (IS_ERR(rdev[i])) {
			ret = PTR_ERR(rdev[i]);
			dev_err(&client->dev, "failed to register %s\n",
				max8893_reg[id].desc.name);
			goto err_unregister;
		}
	}

	max8893_i2c_read(client, MAX8893_REG_ONOFF, (u8 *) &ret);
	max8893_i2c_read(client, MAX8893_REG_DISCHARGE, (u8 *) &ret);
	max8893_i2c_read(client, MAX8893_REG_LSTIME, (u8 *) &ret);
	max8893_i2c_read(client, MAX8893_REG_DVSRAMP, (u8 *) &ret);
	max8893_i2c_read(client, MAX8893_REG_BUCK, (u8 *) &ret);
	max8893_i2c_read(client, MAX8893_REG_LDO1, (u8 *) &ret);
	max8893_i2c_read(client, MAX8893_REG_LDO2, (u8 *) &ret);
	max8893_i2c_read(client, MAX8893_REG_LDO3, (u8 *) &ret);
	max8893_i2c_read(client, MAX8893_REG_LDO4, (u8 *) &ret);
	max8893_i2c_read(client, MAX8893_REG_LDO5, (u8 *) &ret);

	i2c_set_clientdata(client, max8893);
	client_8893data_p = max8893; // store 8893 client data to be used later
	dev_info(&client->dev, "Maxim 8893 regulator driver loaded\n");
	return 0;

err_unregister:
	while (--i >= 0)
		regulator_unregister(rdev[i]);

	kfree(max8893);
out:
	return ret;
}

static int __devexit max8893_remove(struct i2c_client *client)
{
	struct max8893 *max8893 = i2c_get_clientdata(client);
	struct regulator_dev **rdev = max8893->rdev;
	int i;

	for (i = 0; i < MAX8893_END; i++)
		if (rdev[i])
			regulator_unregister(rdev[i]);
	mutex_destroy(&max8893->lock);
	kfree(max8893);

	return 0;
}

static const struct i2c_device_id max8893_id[] = {
	{ "max8893", 0 },
	{ }
};
MODULE_DEVICE_TABLE(i2c, max8893_id);

static struct i2c_driver max8893_driver = {
	.probe = max8893_probe,
	.remove = __devexit_p(max8893_remove),
	.driver		= {
		.name	= "max8893",
		.owner	= THIS_MODULE,
	},
	.id_table	= max8893_id,
};

static int __init max8893_init(void)
{
	return i2c_add_driver(&max8893_driver);
}
subsys_initcall(max8893_init);

static void __exit max8893_exit(void)
{
	i2c_del_driver(&max8893_driver);
}
module_exit(max8893_exit);

