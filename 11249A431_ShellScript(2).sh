#!/bin/bash

# Prompt for user input
echo "Enter first number:"
read num1
echo "Enter second number:"
read num2

# Compare the two numbers
if [ "$num1" -gt "$num2" ]
then
    echo "$num1 is the biggest number."
elif [ "$num2" -gt "$num1" ]
then
    echo "$num2 is the biggest number."
else
    echo "Both numbers are equal."
fi
