#!/bin/bash
printf "Making [%s] solution cpp files at [%s/%s]\n" $2 $1 $2

if [ ! -d ~/dev/algorithms/codeforces/$1/$2 ]; then
    mkdir ~/dev/algorithms/codeforces/$1/$2
fi

cp ~/dev/algorithms/codeforces/a.cpp ~/dev/algorithms/codeforces/$1/$2

geany ~/dev/algorithms/codeforces/$1/$2/a.cpp

printf "Loaded done. solve it!\n"
