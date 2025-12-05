#!/bin/sh
MYDIR=`dirname "$0"`

export HOME=$MYDIR
export LD_LIBRARY_PATH=lib:$LD_LIBRARY_PATH

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

./runner&
sleep 1

PID=`pidof runner`
if [ "$PID" == "" ]; then
    exit
fi

./vol&

SDL_VIDEODRIVER=NDS ./drastic "$1" > debug.log 2>&1
sync

kill_runner
killall vol

echo $sv > /proc/sys/vm/swappiness
echo ondemand > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor
