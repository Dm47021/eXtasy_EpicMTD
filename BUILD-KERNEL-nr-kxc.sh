#!/bin/bash

if [ "$CPU_JOB_NUM" = "" ] ; then
	CPU_JOB_NUM=`grep -c processor /proc/cpuinfo`
fi

DEFCONFIG_STRING=epicmtd_dm_defconfig
PRJROOT=$PWD
CUSTOMVERSION=nitest-jb42_nr-`date +%m%d`
KERNEL_BUILD_DIR=/home/dm47021/Android/kernel_sources/samsung/epicmtd/android_kernel_samsung_epicmtd-cm-10.1
KEXEC_BUILD_DIR=$PRJROOT/kxc-zip
DATE_START=$(date +"%s")

echo "Building kernel"
		pushd $KERNEL_BUILD_DIR
		START_TIME=`date +%s`
		make $DEFCONFIG_STRING
		echo "CONFIG_KEXEC=y" >> .config
		echo "CONFIG_ATAGS_PROC=y" >> .config
		echo "CONFIG_KEXEC_HARDBOOT=y" >> .config
		make -j$CPU_JOB_NUM
		END_TIME=`date +%s`
		let "ELAPSED_TIME=$END_TIME-$START_TIME"
		echo "Total compile time is $ELAPSED_TIME seconds"
echo "Making kexec zip"
		pushd $KEXEC_BUILD_DIR
		cp $KERNEL_BUILD_DIR/arch/arm/boot/zImage $KEXEC_BUILD_DIR
		rm $PRJROOT/$CUSTOMVERSION-kxc.zip
		zip -r $PRJROOT/$CUSTOMVERSION-kxc.zip ./*
DATE_END=$(date +"%s")
echo
DIFF=$(($DATE_END - $DATE_START))
echo "Build completed in $(($DIFF / 60)) minute(s) and $(($DIFF % 60)) seconds."
