zreladdr-y	:= 0x20008000
params_phys-y	:= 0x20000100

# override for Herring
zreladdr-$(CONFIG_MACH_HERRING)	:= 0x30008000
params_phys-$(CONFIG_MACH_HERRING)	:= 0x30000100

#override for Victory
zreladdr-$(CONFIG_MACH_VICTORY)		:= 0x30008000
params_phys-$(CONFIG_MACH_VICTORY)	:= 0x30000100
