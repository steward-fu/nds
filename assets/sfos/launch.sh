#!/bin/sh
MYDIR=`dirname $0`

cd $MYDIR
LD_LIBRARY_PATH=lib ./drastic $1
