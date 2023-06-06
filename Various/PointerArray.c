#include <stdio.h>

int main(void)
{
    int i = 0;

    int a[3] = {222, 333, 444};
    int b[2] = {555, 666};
    int c[4] = {111, 777, 888, 999};
    int *arrays[3] = {a, b, c};

    printf("%p\n", arrays[0]);

    printf("Address          | [0] | ...\n");
    printf("----------------------------\n");
    printf("%p | %d | %d | %d\n", arrays[0], arrays[0][0], arrays[0][1], arrays[0][2]);
    printf("%p | %d | %d | %d | %d\n", arrays[1], arrays[1][0], arrays[1][1], arrays[1][2], arrays[1][9]);

    return 0;
}