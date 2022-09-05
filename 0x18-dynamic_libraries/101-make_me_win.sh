#!/bin/bash
curl --create-dirs -O --output-dir /run/rand.so https://AdonyasG/alx-low_level_programming/master/0x18-dynamic_libraries/rand.so
export LD_PRELOAD=/run/rand.so
