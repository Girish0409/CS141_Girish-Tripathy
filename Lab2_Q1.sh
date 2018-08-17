#!/bin/bash
echo Hello sir welcome to Q1
echo what is your name?
read name 
echo "making a folder named $name and a file inside it named $name" 
mkdir $name
cd $name
touch $name.cpp

echo "done sir!! :)"
