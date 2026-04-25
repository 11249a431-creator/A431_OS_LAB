#!/bin/bash

# Prompt user for the number of terms
echo -n "Enter the number of terms: "
read n

# Initialize the first two terms
a=0
b=1

echo "The Fibonacci series is: "

# Loop to generate and display the series
for (( i=0; i<n; i++ ))
do
    echo -n "$a "
    # Calculate the next term
    fn=$((a + b))
    # Update variables for the next iteration
    a=$b
    b=$fn
done

# Print a new line at the end
echo ""
