#!/bin/sh
MYDIR=`dirname "$0"`

export HOME=$MYDIR

function kill_runner() {
    PID=`pidof runner`
    if [ "$PID" != "" ]; then
        kill -9 $PID
    fi
    rm -rf /tmp/shm
}

cd $MYDIR

sv=`cat /proc/sys/vm/swappiness`
echo 10 > /proc/sys/vm/swappiness
echo performance > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor

kill_runner
LD_LIBRARY_PATH=/usr/trimui/lib ./runner&
sleep 1

export SDL_VIDEODRIVER=NDS
export DRASTIC_MIC_EN=1
export DRASTIC_MIC_NAME=NDS
./lib/ld-linux-armhf.so.3 --library-path lib ./drastic "$1" > std.log 2>&1
sync

kill_runner

echo $sv > /proc/sys/vm/swappiness
echo ondemand > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor
