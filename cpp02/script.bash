#! /bin/bash

n=0

if [ "$#" -lt 1 ]
then
    echo "No arguments suplied"
    exit 1
fi

while [ "$n" -lt $1 ]; do
    mkdir ex0$n
    cd ex0$n
    mkdir src
    mkdir includes
    touch Makefile
    cd ../
    n=$(( n + 1 ))
done