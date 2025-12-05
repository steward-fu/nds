#!/bin/sh
MYDIR=`dirname "$0"`

export HOME=$MYDIR
export NDS_DEBUG_LEVEL=ERROR
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

./runner > debug_runner.log 2>&1 &
./vol&

SDL_VIDEODRIVER=NDS ./drastic "$1" > debug_drastic.log 2>&1
sync

kill_runner
killall vol

echo $sv > /proc/sys/vm/swappiness
echo ondemand > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor
