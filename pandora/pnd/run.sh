#!/bin/sh
mydir=`dirname "$0"`

cd $mydir
`./launcher`
echo "$?"
#op_runfbapp ./drastic /media/Linux/home/steward/Data/nds/pandora/pnd/1.nds
#ofbset -fb /dev/fb1 -pos 0 0 -size 0 0 -mem 0 -en 0
#sync
