#!/bin/bash

if [ -n "$1" ] && [ -n "$2" ]; then
	cd /Users/mbaanni/Custem_cmd/automatecpp
	./a.out $1
	x=$(echo $?)
	if [ "$x" -eq 0 ]; then
		mv /Users/mbaanni/Custem_cmd/automatecpp/$1.* $2;fi
else
	echo " something went wrong"
fi

