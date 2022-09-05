#!/bin/bash
curl /ran https://AdonyasG/alx-low_level_programming/master/0x18-dynamic_libraries/rand.so
export LD_PRELOAD=/ran/rand.so
