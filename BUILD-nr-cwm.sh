#!/bin/bash

if [ "$CPU_JOB_NUM" = "" ] ; then
	CPU_JOB_NUM=`grep -c processor /proc/cpuinfo`
fi

DEFCONFIG_STRING=epicmtd_dm_defconfig
PRJROOT=$PWD
CUSTOMVERSION=eXtasy-cm10.1_krnl-cwm-`date +%m%d`
KERNEL_BUILD_DIR=/home/dm47021/Android/kernel_sources/samsung/epicmtd/android_kernel_samsung_epicmtd-cm-10.1
BOOTIMG_BUILD_DIR=$PRJROOT/create_boot.img
ZIP_BUILD_DIR=$PRJROOT/zip-nr
DATE_START=$(date +"%s")

echo "Building kernel"
		pushd $KERNEL_BUILD_DIR
		START_TIME=`date +%s`
		make $DEFCONFIG_STRING
		make -j$CPU_JOB_NUM
		END_TIME=`date +%s`
		let "ELAPSED_TIME=$END_TIME-$START_TIME"
		echo "Total compile time is $ELAPSED_TIME seconds"
echo "Making boot image"
		cp arch/arm/boot/zImage $BOOTIMG_BUILD_DIR
		pushd $BOOTIMG_BUILD_DIR
		bash create_boot.img.sh nr cwm
echo "Making zip"
		cp boot.img $ZIP_BUILD_DIR
		pushd $ZIP_BUILD_DIR
		rm -rf system
		mkdir -p system/lib/modules
		find $KERNEL_BUILD_DIR -name '*.ko' -exec cp '{}' system/lib/modules/ \;
		rm $PRJROOT/$CUSTOMVERSION.zip
		zip -r $PRJROOT/$CUSTOMVERSION.zip ./*
DATE_END=$(date +"%s")
echo
DIFF=$(($DATE_END - $DATE_START))
echo "Build completed in $(($DIFF / 60)) minute(s) and $(($DIFF % 60)) seconds."
