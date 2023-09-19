#!/bin/bash
wget -q -O /tmp/101-custom_rand.so https://github.com/codejunkie312/alx-low_level_programming/raw/master/0x18-dynamic_libraries/101-custom_rand.so
export LD_PRELOAD=/tmp/101-custom_rand.so
