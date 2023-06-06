#include <stdio.h>

void addInt(int *, int);

int main(void)
{
    int number = 0;
    int additive = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter an additive: ");
    scanf("%d", &additive);
    printf("\n");

    addInt(&number, additive);

    printf("The new number is: %d", number);

    return 0;
}

void addInt(int *number, int additive)
{
    *number += additive;
}