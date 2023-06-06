#include <stdio.h>

void swap(int *, int *);

int main(void)
{
    int a = 9;
    int b = 1;
    printf("a = %d, b = %d\n", a, b);

    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("swap\n");
}