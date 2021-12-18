#!/bin/zsh

make || exit 1
echo

# ./aa | cat -e | diff subject.out - && test [${PIPESTATUS[1]} -eq 0] && echo ok!
./aa | cat -e | diff subject.out -
