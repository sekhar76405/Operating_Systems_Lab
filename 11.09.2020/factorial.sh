#!/bin/bash
echo "enter f to calculate the factorial of a number"
read command

g++ /home/serrent/os_lab/11.09.2020/factorial_cmdlines.cpp -o main
/home/serrent/os_lab/11.09.2020/./main "${command}"
