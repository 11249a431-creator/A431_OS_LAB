#!/bin/bash
# Script to check whether a number is even or odd

# Prompt the user for input
read -p "Enter a number: " num

# Check the remainder of (num / 2)
if [ $((num % 2)) -eq 0 ]; then
    echo "The number $num is Even."
else
    echo "The number $num is Odd."
fi
