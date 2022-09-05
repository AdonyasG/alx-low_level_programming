#!/bin/bash
curl https://AdonyasG/alx-low_level_programming/master/0x18-dynamic_libraries/rand.so
export LD_PRELOAD=$PWD/rand.so
