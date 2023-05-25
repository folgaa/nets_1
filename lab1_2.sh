#!/bin/bash

if [ $# -eq 0 ]
then
        echo "No arguments"
        exit 1
fi

array=("$@")
index=$#

while [ $index -ne 0 ]
do
	(( index-- ))
	echo ${array[$index]}
done
