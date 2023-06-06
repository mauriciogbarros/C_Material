#include <stdio.h>
int main()
{
    int a = 42;
    double d = 58.394;
    char c = 'r';

    int * addressOf_a = &a;
    double * addressOf_d = &d;
    char * addressOf_c = &c;

    printf("a = %d, and address of a is %p\n", a, addressOf_a);
    printf("d = %lf, and address of d is %p\n", d, addressOf_d);
    printf("c = %c, and address of c is %p\n", c, addressOf_c);

    return 0;
}