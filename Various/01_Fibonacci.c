#include<stdio.h>

int fibonacci(int);

int main(void)
{
    int number, result;

    printf("Which Fibonacci number would you like: ");
    scanf("%d", &number);
    if(number <= 0)
    {
        printf("%d is not positive. Aborting!\n", number);
    }
    else
    {
        result = fibonacci(number);
        printf("The %dth Fibonacci number is %d.\n", number, fibonacci);
    }

    return 0;
}

int fibonacci(int number)
{
    if(number == 1)
    {
        return 0;
    }
    else if (number == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(number-1) + fibonacci(number-2);
    }
}