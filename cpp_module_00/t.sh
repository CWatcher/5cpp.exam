#!/bin/zsh

make || exit 1
echo

diff subject.out <(./aa | cat -e) && echo ok!
