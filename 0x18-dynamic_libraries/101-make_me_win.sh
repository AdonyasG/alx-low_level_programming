#!/bin/bash
curl --create-dirs -O --output /tmp/run https://github.com/AdonyasG/alx-low_level_programming/raw/master/0x18-dynamic_libraries/rand.so
export LD_PRELOAD=/tmp/run/rand.so
