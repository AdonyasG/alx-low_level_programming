#!/bin/bash
curl https://github.com/AdonyasG/alx-low_level_programming/raw/master/0x18-dynamic_libraries/rand.so > /tmp/rand.so
export LD_PRELOAD=/tmp/rand.so
