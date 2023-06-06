#include<stdio.h>

int sum(int, int); // Prototype

int main(void)
{
    int x, y, result;

    printf("Please enter two numbers: ");
    scanf("%d %d", &x, &y);

    result = sum(x, y);

    printf("x + y = %d", result);

    return 0;
}

int sum(int x, int  y) // Definition
{
    return x + y;
}