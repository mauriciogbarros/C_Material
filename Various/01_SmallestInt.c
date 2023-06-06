/*
The goal of this problem is to find the smallest integer in a list of numbers.

To help you with this task, please write a function callen min() that finds and returns the smallest amongst two integers (be sure to also write a prototype for this function). The function thus takes two integers as input and returns the smallest of the two. This function will use an if statement with a condition that containst either "less than" or "greater than."

Next, please use min() in your main function to work your way through an entire list of numbers in order to find its minimum. The first number you read gives the number of elements in the list of integers under consideration. You will then read the integer values, using min() to keep only the smallest integer read at each step. In the end, please print out the smallest integer in the list.
*/

#include <stdio.h>

int min(int, int);

int main(void)
{
    int n, i, value1 = 0, value2 = 0;

    scanf("%d", &n);

    scanf("%d", &value1);

    for(i = 1; i < n; i++)
    {
        scanf("%d", &value2);
        value1 = min(value1, value2);
    }
    
    printf("%d", value1);

    return 0;
}

int min(int value1, int value2)
{
    if (value1 <= value2)
        return value1;
    else
        return value2;
}