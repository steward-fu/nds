#!/bin/sh
MYDIR=`dirname "$0"`

export HOME=$MYDIR

function kill_runner() {
    PID=`pidof runner`
    if [ "$PID" != "" ]; then
        kill -9 $PID
    fi
    rm -rf /tmp/NDS_SHM
}

cd $MYDIR

sv=`cat /proc/sys/vm/swappiness`
echo 10 > /proc/sys/vm/swappiness
echo performance > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor

kill_runner
sleep 0.3

LD_LIBRARY_PATH=/usr/trimui/lib ./runner&
sleep 0.3

PID=`pidof runner`
if [ "$PID" == "" ]; then
    exit
fi

export SDL_VIDEODRIVER=NDS

./lib/ld-linux-armhf.so.3 --library-path lib ./drastic "$1" > std.log 2>&1
sync

kill_runner

echo $sv > /proc/sys/vm/swappiness
echo ondemand > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor
