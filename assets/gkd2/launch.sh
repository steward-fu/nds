#!/bin/sh
MYDIR=`dirname "$0"`

export HOME=$MYDIR
export LD_LIBRARY_PATH=lib:$LD_LIBRARY_PATH

function kill_runner() {
    PID=`pidof runner`
    if [ "$PID" != "" ]; then
        kill -9 $PID
    fi
}

cd $MYDIR

sv=`cat /proc/sys/vm/swappiness`
echo 10 > /proc/sys/vm/swappiness

kill_runner
./runner&
sleep 1

SDL_VIDEODRIVER=NDS ./drastic "$1" > std.log 2>&1
sync

kill_runner

echo $sv > /proc/sys/vm/swappiness
