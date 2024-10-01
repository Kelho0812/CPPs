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
	touch ./src/main.cpp
    mkdir includes
	touch ./includes/main.hpp
    cd ../
    n=$(( n + 1 ))
done