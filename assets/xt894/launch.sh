#!/bin/sh
MYDIR=`dirname "$0"`

export HOME=$MYDIR
export PATH=$MYDIR:$PATH
export SDL_VIDEODRIVER=NDS
export DRASTIC_MIC_EN=1
export DRASTIC_MIC_NAME=NDS
export LD_LIBRARY_PATH=lib:/usr/local/lib:$LD_LIBRARY_PATH

#sudo chmod 0777 /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor

#sv=`cat /proc/sys/vm/swappiness`
#echo 10 | sudo tee /proc/sys/vm/swappiness
#echo ondemand > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor

cd $MYDIR
./drastic
sync

#echo $sv | sudo tee /proc/sys/vm/swappiness
#echo interactive > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor
