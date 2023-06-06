#include <stdio.h>

int main(void)
{
    double a = 42.98;
    double *addressOf_a = &a;

    printf("At the address %p there is the value %.2lf\n", addressOf_a, *addressOf_a);

    char c = 'm';
    char *addressOf_c = &c;
    char d = * addressOf_c;

    printf("At the address %p there is the value %c\n", addressOf_c, d);

    * addressOf_a = 32;
    * addressOf_a += 1;

    printf("At the address %p there is the value %.2lf\n", addressOf_a, * addressOf_a);
    

    return 0;
}