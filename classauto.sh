#!/bin/bash

my=$(pwd);

if [ -n "$1" ] && [ -n $path ]; then
	cd ~/Desktop/Auto_class/automatecpp
	./a.out $1
	x=$(echo $?)
	if [ "$x" -eq 0 ]; then
		mv ~/Desktop/Auto_class/automatecpp/$1.* $my;fi
else
	echo " something went wrong"
fi

