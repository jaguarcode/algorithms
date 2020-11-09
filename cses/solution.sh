#!/bin/bash
printf "Make [%s] solution source file at [%s/a.cpp]\n" $1 $1

if [ ! -d ~/dev/algorithms/cses/$1 ]; then
    mkdir ~/dev/algorithms/cses/$1
fi

cp ~/dev/algorithms/cses/a.cpp ~/dev/algorithms/cses/$1

geany ~/dev/algorithms/cses/$1/a.cpp

printf "Done. solve it! good-luck!\n"
