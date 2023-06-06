#include <stdio.h>

int factorial(int);

int main(void)
{
    int n, result;

    printf("Please enter a positive integer: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("%d is negative! Aborting...\n", n);
    }
    else
    {
        result = factorial(n);
        printf("%d! = %d.\n", n, result);
    }

    return 0;
}

int factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}