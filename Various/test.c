#include <stdio.h>
#include <math.h>

int main(void)
{
    int num;
    double sqrtNum;
    
    scanf("%d", &num);
    sqrtNum = sqrt(num);
    printf("%.8lf\n", sqrtNum);
    printf("%.10lf\n", exp(1));
    printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra program.c /usr/lib/libm.a -o program\n");

    return 0;
}