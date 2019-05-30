#! /usr/bin/zsh

if [ $# != 0 ]; then
    echo "$#  $1"
    if [ $1 = "first" ]; then
        mkdir -p /opt/swap
        cd /opt/swap
        dd if=/dev/zero of=swapfile bs=1M count=4096
    fi
fi

mkswap /opt/swap/swapfile
swapon /opt/swap/swapfile
