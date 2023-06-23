#!/bin/bash
wget -P /tmp https://github.com/Mire-web/alx-low_level_programming/tree/main/0x18-dynamic_libraries/megamillion.so
export LD_PRELOAD=/tmp/megamillion.so 
