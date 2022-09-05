#!/bin/bash
curl https://github.com/AdonyasG/alx-low_level_programming/raw/master/0x18-dynamic_libraries/rand.so > /run/rand.so
export LD_PRELOAD=/run/rand.so
