#!/bin/bash

if [ $# -eq 0 ] 
then
	echo "No arguments"
	exit 1
fi

array=("$@")

for (( i = (( $#-1 )); i >= 0; i-- ))
do
	echo ${array[$i]}
done
