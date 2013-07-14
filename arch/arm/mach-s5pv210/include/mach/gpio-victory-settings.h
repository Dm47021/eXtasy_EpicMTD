#ifndef __GPIO_SETTINGS_H_
#define __GPIO_SETTINGS_H_

#define S3C_GPIO_SETPIN_ZERO  0
#define S3C_GPIO_SETPIN_ONE   1
#define S3C_GPIO_SETPIN_NONE  2
#define S3C_GPIO_EINT         S3C_GPIO_SPECIAL(0xF)

struct gpio_init_data {
	uint num;
	uint cfg;
	uint val;
	uint pud;
	uint drv;
};

//	GPIO Initialization table
static struct gpio_init_data victory_init_gpios[] = {
	{
		.num = S5PV210_GPB(0),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPB(1),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPB(2),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPB(3),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPB(4),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPB(5),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPB(6),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPB(7),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_GPC0(0),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPC0(1),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPC0(2),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPC0(3),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPC0(4),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_GPC1(0),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPC1(1),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPC1(2),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPC1(3),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPC1(4),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_GPD0(0),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPD0(1),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPD0(2),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPD0(3),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_GPD1(0),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPD1(1),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPD1(2),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPD1(3),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPD1(4),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPD1(5),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_GPE0(0),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPE0(1),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPE0(2),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPE0(3),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPE0(4),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPE0(5),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPE0(6),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPE0(7),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_GPE1(0),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPE1(1),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPE1(2),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPE1(3),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPE1(4),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_GPF3(4),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPF3(5),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_GPG0(0),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPG0(1),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPG0(2),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPG0(3),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPG0(4),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPG0(5),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPG0(6),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_GPG1(0),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X, // added '.drv = S3C_GPIO_DRVSTR_1X' -nubecoder
	}, {
		.num = S5PV210_GPG1(1),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X, // added '.drv = S3C_GPIO_DRVSTR_1X' -nubecoder
	}, {
		.num = S5PV210_GPG1(2),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X, // added '.drv = S3C_GPIO_DRVSTR_1X' -nubecoder
	}, {
		.num = S5PV210_GPG1(3),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X, // added '.drv = S3C_GPIO_DRVSTR_1X' -nubecoder
	}, {
		.num = S5PV210_GPG1(4),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X, // added '.drv = S3C_GPIO_DRVSTR_1X' -nubecoder
	}, {
		.num = S5PV210_GPG1(5),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X, // added '.drv = S3C_GPIO_DRVSTR_1X' -nubecoder
	}, {
		.num = S5PV210_GPG1(6),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X, // added '.drv = S3C_GPIO_DRVSTR_1X' -nubecoder
	},

	{
		.num = S5PV210_GPG2(0),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPG2(1),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPG2(2),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPG2(3),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPG2(4),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPG2(5),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPG2(6),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_GPG3(0),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ONE,
		.pud = S3C_GPIO_PULL_UP,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPG3(1),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPG3(2),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_UP,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPG3(3),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPG3(4),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPG3(5),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPG3(6),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_GPH0(0),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH0(1),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH0(2),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH0(3),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH0(4),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH0(5),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH0(6),
		.cfg = S3C_GPIO_EINT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH0(7),
		.cfg = S3C_GPIO_EINT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_GPH1(0),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH1(1),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH1(2),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH1(3),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH1(4),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH1(5),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH1(6),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH1(7),
		.cfg = S3C_GPIO_EINT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_GPH2(0),
		.cfg = S3C_GPIO_SFN(3),
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH2(1),
		.cfg = S3C_GPIO_SFN(3),
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH2(2),
		.cfg = S3C_GPIO_SFN(3),
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH2(3),
		.cfg = S3C_GPIO_SFN(3),
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH2(4),
		.cfg = S3C_GPIO_SFN(3),
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH2(5),
		.cfg = S3C_GPIO_SFN(3),
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH2(6),
		.cfg = S3C_GPIO_EINT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH2(7),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_GPH3(0),
		.cfg = S3C_GPIO_SFN(3),
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH3(1),
		.cfg = S3C_GPIO_SFN(3),
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH3(2),
		.cfg = S3C_GPIO_SFN(3),
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH3(3),
		.cfg = S3C_GPIO_SFN(3),
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH3(4),
		.cfg = S3C_GPIO_SFN(3),
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH3(5),
		.cfg = S3C_GPIO_SFN(3),
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH3(6),
		.cfg = S3C_GPIO_EINT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPH3(7),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_4X,
	},

	{
		.num = S5PV210_GPI(0),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPI(1),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPI(2),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPI(3),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPI(4),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPI(5),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPI(6),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_GPJ0(0),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ0(1),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ0(2),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ0(3),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ0(4),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ0(5),
		.cfg = S3C_GPIO_EINT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ0(6),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ0(7),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_GPJ1(0),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ1(1),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ1(2),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ1(3),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ1(4),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ1(5),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_GPJ2(0),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ2(1),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ2(2),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ2(3),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ2(4),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ2(5),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ2(6),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ2(7),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_GPJ3(0),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ3(1),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ3(2),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ3(3),
		.cfg = S3C_GPIO_EINT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ3(4),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ3(5),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ3(6),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ3(7),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_GPJ4(0),
		.cfg = S3C_GPIO_SFN(3),
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ4(1),
		.cfg = S3C_GPIO_SFN(3),
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ4(2),
		.cfg = S3C_GPIO_SFN(3),
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ4(3),
		.cfg = S3C_GPIO_SFN(3),
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_GPJ4(4),
		.cfg = S3C_GPIO_SFN(3),
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_MP01(0),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_MP01(2),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_MP01(5),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_MP02(0),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_MP02(1),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_MP02(3),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_MP03(3),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_MP03(5),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_MP03(6),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_MP03(7),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_MP04(0),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_MP04(2),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_MP04(4),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_MP04(5),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_MP04(6),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_MP04(7),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	},

	{
		.num = S5PV210_MP05(1),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_MP05(2),
		.cfg = S3C_GPIO_OUTPUT,
		.val = S3C_GPIO_SETPIN_ZERO,
		.pud = S3C_GPIO_PULL_NONE,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_MP05(3),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_MP05(4),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	}, {
		.num = S5PV210_MP05(6),
		.cfg = S3C_GPIO_INPUT,
		.val = S3C_GPIO_SETPIN_NONE,
		.pud = S3C_GPIO_PULL_DOWN,
		.drv = S3C_GPIO_DRVSTR_1X,
	},
};

//	off part GPIO Sleep Control table
//	{pin number,      sleep mode conf,    sleep pullup/down config}
static unsigned int victory_sleep_gpio_table[][3] = {

	// GPA0 --------------------------------------------------------------------
	{S5PV210_GPA0(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},
	{S5PV210_GPA0(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, //20100503_inchul.im... input pull none in sleep mode(for victory)
	{S5PV210_GPA0(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},
	{S5PV210_GPA0(3), S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE},//shiks_DK05	{S5PV210_GPA0(3), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPA0(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPA0(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPA0(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPA0(7), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)

	// GPA1 --------------------------------------------------------------------
	{S5PV210_GPA1(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100611_inchul... input pull down(from HW)
	{S5PV210_GPA1(1), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, //20100611_inchul... output low pull none(from HW)
	{S5PV210_GPA1(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPA1(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)

	// GPB --------------------------------------------------------------------
	{S5PV210_GPB(0), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPB(1), S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE},
	{S5PV210_GPB(2), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPB(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100430_inchul... BUCK_1_EN_B : input pull down in sleep mode(for victory)
	{S5PV210_GPB(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100722_inchul... input pull down(from HW)
	{S5PV210_GPB(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPB(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPB(7), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)

	// GPC0 --------------------------------------------------------------------
	{S5PV210_GPC0(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPC0(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPC0(2), S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE},  //20100506_inchul... GPIO_WIMAX_PM_SDA : Input & Pull-None in Sleep Mode(for victory)
	//cky 20100503 WIMAX_I2C_CON
	{S5PV210_GPC0(3), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, //hojun_kim from HW req
	{S5PV210_GPC0(4), S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, //20100506_inchul... GPIO_WIMAX_PM_SCL : Input & Pull-None in Sleep Mode(for victory)

	// GPC1 --------------------------------------------------------------------
	{S5PV210_GPC1(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPC1(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPC1(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPC1(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPC1(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)

	// GPD0 --------------------------------------------------------------------
	{S5PV210_GPD0(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPD0(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, //20100503_inchul.im... Input Pull-None in Sleep Mode(for victory)
	{S5PV210_GPD0(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPD0(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},

	// GPD1 --------------------------------------------------------------------
	{S5PV210_GPD1(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},   //20100426_inchul... GPIO_CAM_SDA_29V : Input & Pull-Down in Sleep Mode(for victory)
	{S5PV210_GPD1(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},   //20100426_inchul... GPIO_CAM_SCL_29V : Input & Pull-Down in Sleep Mode(for victory)
	{S5PV210_GPD1(2), S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE},   //20100506_inchul... AP_SDA_30V : output high & Pull-None in Sleep Mode(for victory)
	{S5PV210_GPD1(3), S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE},   //20100506_inchul... AP_SCL_30V : output high & Pull-None in Sleep Mode(for victory)
	{S5PV210_GPD1(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},  //20100506_inchul... GPIO_TSP_SDA_28V : Input & Pull-Down in Sleep Mode(for victory)
	{S5PV210_GPD1(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},  //20100506_inchul... GPIO_TSP_SCL_28V : Input & Pull-Down in Sleep Mode(for victory)

	// GPE0 --------------------------------------------------------------------
	{S5PV210_GPE0(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPE0(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPE0(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPE0(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPE0(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPE0(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPE0(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPE0(7), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},

	// GPE1 --------------------------------------------------------------------
	{S5PV210_GPE1(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPE1(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPE1(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPE1(3), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPE1(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},

	// GPF0 --------------------------------------------------------------------
	{S5PV210_GPF0(0), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF0(1), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF0(2), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF0(3), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF0(4), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF0(5), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF0(6), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF0(7), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},

	// GPF1 --------------------------------------------------------------------
	{S5PV210_GPF1(0), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF1(1), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF1(2), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF1(3), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF1(4), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF1(5), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF1(6), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF1(7), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},

	// GPF2 --------------------------------------------------------------------
	{S5PV210_GPF2(0), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF2(1), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF2(2), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF2(3), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF2(4), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF2(5), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF2(6), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF2(7), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},

	// GPF3 --------------------------------------------------------------------
	{S5PV210_GPF3(0), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF3(1), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF3(2), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF3(3), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPF3(4), S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE}, //sridhar-sleep conf donewhileentering sleep and not during boot time20100426_inchul... CODEC_LDO_EN is Low in Sleep Mode(for victory)
	{S5PV210_GPF3(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},

	// GPG0 --------------------------------------------------------------------
	{S5PV210_GPG0(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPG0(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPG0(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPG0(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPG0(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPG0(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPG0(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)

	// GPG1 --------------------------------------------------------------------
	{S5PV210_GPG1(0), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE}, //20100611_inchul.im... input/ pull-down in sleep mode(from HW)
	{S5PV210_GPG1(1), S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, //20100505_inchul.im... output high/ pull-none  in sleep mode(for victory)
	{S5PV210_GPG1(2), S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE}, //20100505_inchul.im... output low/ pull-none  in sleep mode(for victory)
	{S5PV210_GPG1(3), S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, //20100505_inchul.im... output high/ pull-none in sleep mode(for victory)
	{S5PV210_GPG1(4), S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, //20100505_inchul.im... output high/ pull-none  in sleep mode(for victory)
	{S5PV210_GPG1(5), S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, //20100505_inchul.im... output high/ pull-none  in sleep mode(for victory)
	{S5PV210_GPG1(6), S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, //20100505_inchul.im... output high/ pull-none  in sleep mode(for victory)

	// GPG2 --------------------------------------------------------------------
	{S5PV210_GPG2(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPG2(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPG2(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},
	{S5PV210_GPG2(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPG2(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPG2(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPG2(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)

	// GPG3 --------------------------------------------------------------------
	{S5PV210_GPG3(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100506_inchul... _3_TOUCH_SDA_28V : Input & Pull-Down in Sleep Mode(for victory)
	{S5PV210_GPG3(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPG3(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100506_inchul... _3_TOUCH_SCL_28V : Input & Pull-Down in Sleep Mode(for victory)
	{S5PV210_GPG3(3), S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE}, //20100426_inchul... GPIO_MICBIAS_EN : Output Low & Pull-None in Sleep Mode(for victory)
	{S5PV210_GPG3(4), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPG3(5), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPG3(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)

	/* Alive part ending and off part start*/
	// GPI --------------------------------------------------------------------
	{S5PV210_GPI(0), S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE},
	{S5PV210_GPI(1), S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE},
	{S5PV210_GPI(2), S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE},
	{S5PV210_GPI(3), S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE},
	{S5PV210_GPI(4), S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE},
	{S5PV210_GPI(5), S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE},
	{S5PV210_GPI(6), S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE},

	// GPJ0 --------------------------------------------------------------------
	{S5PV210_GPJ0(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_UP}, //20100722_inchul... input pull up(from HW)
	{S5PV210_GPJ0(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},
	{S5PV210_GPJ0(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},
	{S5PV210_GPJ0(3), S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE}, //Keep previous setting for WLAN_BT_EN pin while going to sleep HERE
	{S5PV210_GPJ0(4), S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE}, //Keep previous setting for BT_RST pin while going to sleep HERE
	{S5PV210_GPJ0(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPJ0(6), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPJ0(7), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)

	// GPJ1 --------------------------------------------------------------------
	{S5PV210_GPJ1(0), S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE},
	{S5PV210_GPJ1(1), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPJ1(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_GPJ1(3), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPJ1(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100611_inchul... input pull down(from HW)
	{S5PV210_GPJ1(5), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},

	// GPJ2 --------------------------------------------------------------------
	{S5PV210_GPJ2(0), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPJ2(1), S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, //20100507_inchul... output high/pull-none in sleep mode(for victory)
	{S5PV210_GPJ2(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	{S5PV210_GPJ2(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},  //20100517_inchul... input pull down(from HW)
	{S5PV210_GPJ2(4), S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE},  //jihyon82.kim for proximity sensor
	{S5PV210_GPJ2(5), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPJ2(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //hojun_kim S3C_GPIO_PULL_NONE ->S3C_GPIO_PULL_DOWN
	{S5PV210_GPJ2(7), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100430_inchul... CAM_FLASH_SET : Input & Pull-Down in Sleep Mode(for victory)

	// GPJ3 --------------------------------------------------------------------
	{S5PV210_GPJ3(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100611_inchul... input pull down(from HW)
	{S5PV210_GPJ3(1), S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE},
	{S5PV210_GPJ3(2), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_GPJ3(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100426_inchul... _3_GPIO_TOUCH_INT : Input & Pull-None in Sleep Mode(for victory)
	{S5PV210_GPJ3(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, //20100510_inchul... GPIO_FM_SCL_28V : input & Pull-None in Sleep Mode(for victory)
	{S5PV210_GPJ3(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, //20100510_inchul... GPIO_FM_SDA_28V : input & Pull-None in Sleep Mode(for victory)
	{S5PV210_GPJ3(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, //20100510_inchul... GPIO_AP_PMIC_SCL : input & Pull-None in Sleep Mode(for victory)
	{S5PV210_GPJ3(7), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, //20100510_inchul... GPIO_AP_PMIC_SDA : input & Pull-None in Sleep Mode(for victory)

	// GPJ4 --------------------------------------------------------------------
	{S5PV210_GPJ4(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, //20100510_inchul... input/pull none in sleep mode(for victory)
	{S5PV210_GPJ4(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, //20100510_inchul... input/pull none in sleep mode(for victory)
	{S5PV210_GPJ4(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, //20100510_inchul... input/pull none in sleep mode(for victory)
	{S5PV210_GPJ4(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, //20100510_inchul... input/pull none in sleep mode(for victory)
	{S5PV210_GPJ4(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)

	/* memory part */
	// MP01 --------------------------------------------------------------------
	{S5PV210_MP01(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP01(1), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_MP01(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP01(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100510_inchul... pull none in sleep mode(for victory) //20100718_hyunjooakim down
	{S5PV210_MP01(4), S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE},
	{S5PV210_MP01(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP01(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP01(7), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},

	// MP02 --------------------------------------------------------------------
	{S5PV210_MP02(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP02(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP02(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},
	{S5PV210_MP02(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},

	// MP03 --------------------------------------------------------------------
	{S5PV210_MP03(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP03(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP03(2), S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE}, //20100429_inchul.im... OneNand RP(Reset) : Output Low/Pull-None in Sleep Mode(for victory)
	{S5PV210_MP03(3), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_DOWN}, //20100504_inchul... out low in sleep mode(for victory)
	{S5PV210_MP03(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE},
	{S5PV210_MP03(5), S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE},
	{S5PV210_MP03(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP03(7), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},

	// MP04 --------------------------------------------------------------------
	{S5PV210_MP04(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, //20100510_inchul... input & Pull-None in Sleep Mode(for victory)
	{S5PV210_MP04(1), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_MP04(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_NONE}, //20100510_inchul... input & Pull-None in Sleep Mode(for victory)
	{S5PV210_MP04(3), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	//cky 20100503 WIMAX_CON2
	{S5PV210_MP04(4), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	//cky 20100503 WIMAX_WAKEUP
	{S5PV210_MP04(5), S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE}, // tshpark 20101020
	//cky 20100503 WIMAX_CON0
	{S5PV210_MP04(6), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	//cky 20100503 WIMAX_CON1
	{S5PV210_MP04(7), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},

	// MP05 --------------------------------------------------------------------
	{S5PV210_MP05(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)
	//cky 20100503 WIMAX_IF_MODE0
	{S5PV210_MP05(1), S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE},
	//cky 20100503 WIMAX_IF_MODE1
	{S5PV210_MP05(2), S3C_GPIO_SLP_PREV, S3C_GPIO_PULL_NONE},
	{S5PV210_MP05(3), S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE},  //20100506_inchul... AP_I2C_SCL : output high & Pull-None in Sleep Mode(for victory)
	{S5PV210_MP05(4), S3C_GPIO_SLP_OUT1, S3C_GPIO_PULL_NONE},  //20100506_inchul... AP_I2C_SDA : output high & Pull-None in Sleep Mode(for victory)
	{S5PV210_MP05(5), S3C_GPIO_SLP_OUT0, S3C_GPIO_PULL_NONE},
	{S5PV210_MP05(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP05(7), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN}, //20100517_inchul... input pull down(from HW)

	// MP06 --------------------------------------------------------------------
	{S5PV210_MP06(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP06(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP06(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP06(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP06(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP06(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP06(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP06(7), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},

	// MP07 --------------------------------------------------------------------
	{S5PV210_MP07(0), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP07(1), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP07(2), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP07(3), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP07(4), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP07(5), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP07(6), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
	{S5PV210_MP07(7), S3C_GPIO_SLP_INPUT, S3C_GPIO_PULL_DOWN},
};

//	alive part GPIO Sleep Control table
//	{pin number,      sleep mode conf, sleep pin value,      sleep pullup/down config}
static unsigned int victory_sleep_alive_gpio_table[][4] =
{
	// GPB --------------------------------------------------------------------
	{S5PV210_GPB(3), S3C_GPIO_OUTPUT,S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE},

	// GPH0 --------------------------------------------------------------------
	//{S5PV210_GPH0(1), S3C_GPIO_INPUT,S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_DOWN},
	//{S5PV210_GPH0(5), S3C_GPIO_OUTPUT,S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE},

	// GPH1 --------------------------------------------------------------------
	{S5PV210_GPH1(2), S3C_GPIO_INPUT,S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE},
	{S5PV210_GPH1(7), S3C_GPIO_INPUT,S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE},

	// GPH2 --------------------------------------------------------------------
	{S5PV210_GPH2(0), S3C_GPIO_OUTPUT,S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE},
	{S5PV210_GPH2(1), S3C_GPIO_OUTPUT,S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE},
	{S5PV210_GPH2(2), S3C_GPIO_OUTPUT,S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE},
	{S5PV210_GPH2(3), S3C_GPIO_OUTPUT,S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE},
	{S5PV210_GPH2(4), S3C_GPIO_OUTPUT,S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE},
	{S5PV210_GPH2(5), S3C_GPIO_OUTPUT,S3C_GPIO_SETPIN_ZERO, S3C_GPIO_PULL_NONE},

	// GPH3 --------------------------------------------------------------------
	{S5PV210_GPH3(2), S3C_GPIO_INPUT,S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE},
	{S5PV210_GPH3(3), S3C_GPIO_INPUT,S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE},
	{S5PV210_GPH3(4), S3C_GPIO_INPUT,S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE},
	{S5PV210_GPH3(5), S3C_GPIO_INPUT,S3C_GPIO_SETPIN_NONE, S3C_GPIO_PULL_NONE},
	{S5PV210_GPH3(7), S3C_GPIO_OUTPUT,S3C_GPIO_SETPIN_ONE, S3C_GPIO_PULL_NONE},
};
#endif
