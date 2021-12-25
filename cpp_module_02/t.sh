#! /bin/zsh

make || exit 1
echo

diff subject_out.log <(./aa | cat -e) && echo ok!
