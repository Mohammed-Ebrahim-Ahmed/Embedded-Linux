#!/bin/bash

dir=~/script_exercise

if [ -e $dir ]; then
	echo "the directory script_exercise exist!"
	cd $dir
else
	mkdir $dir
	cd $dir
	touch file{1..5}.txt
fi


for f in file{1..5}.txt
do
	if [ -e $f ]; then
		echo $(date) >> $f
	else
		echo "$f does not exist "
	fi
done







	
for f in file{1..5}.txt
do
	if [ -e $f ]; then
		echo "The date in $f"
		cat $f
		echo " "
	else
		echo "$f does not exist"
	fi
done


