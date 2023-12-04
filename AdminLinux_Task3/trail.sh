#!/bin/bash

supposedLoc=/home/mohammed/.bashrc

loc=$(locate ~/.bashrc)

echo $loc
echo $supposedLoc
if [ $supposedLoc == $loc ]; then
	echo "export HELLO=$HOSTNAME" >> ./.bashrc
	echo "LOCAL=$(whoami)" >> ./.bashrc
fi

gnome-terminal

