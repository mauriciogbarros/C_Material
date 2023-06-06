#include <stdio.h>

int main(void)
{
    char c;
    int i;
    double d;
    char listChar[3];
    int listInt[3];
    double listDouble[3];

    printf("char = %zu bytes = %d bits\n", sizeof(c), 8*sizeof(c));
    printf("int = %zu bytes = %d bits\n", sizeof(i), 8*sizeof(i));
    printf("double = %zu bytes = %d bits\n", sizeof(d), 8*sizeof(d));
    printf("Array of 3 char = %zu bytes = %d bits\n", sizeof(listChar), 8*sizeof(listChar));
    printf("Array of 3 int = %zu bytes = %d bits\n", sizeof(listInt), 8*sizeof(listInt));
    printf("Array of 3 double = %zu bytes = %d bits\n", sizeof(listDouble), 8*sizeof(listDouble));

    return 0;
}