#!/bin/bash

# Prompt user for three numbers
echo "Enter first number:"
read a
echo "Enter second number:"
read b
echo "Enter third number:"
read c

# Compare numbers using if-elif-else logic
if [ $a -gt $b ] && [ $a -gt $c ]
then
    echo "$a is the greatest number."
elif [ $b -gt $a ] && [ $b -gt $c ]
then
    echo "$b is the greatest number."
else
    echo "$c is the greatest number."
fi
