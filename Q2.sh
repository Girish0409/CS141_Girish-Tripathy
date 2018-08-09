#!/bin/bash
echo Hello sir, Welcome to Q2
echo what is your name?
read name
echo making a folder named $name and 5 files inside it named $name
mkdir $name
cd $name
for i in 1 2 3 4 5
do
  touch $name$i.cpp
done
echo "done sir!! :)"
