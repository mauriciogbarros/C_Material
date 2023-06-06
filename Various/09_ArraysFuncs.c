/*
Within this program, we will pass an array with 6 integers to a function, ahve the function swap the first and last integer, the sencond and the second to last integer, the third and the third to last integer.

The function is called reverseArray and doesn't return anything (void). It should take one parameter, representing the array of integers.

The main function first reads 6 integers from the input, and assigns them to the array. The main function then calls reverseArray, passing the array as an argument.

The main function then prints the reversed array.
*/

#include <stdio.h>

void reverseArray(int []);

int main(void)
{
    int array[6] = {0};
    scanf("%d %d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4], &array[5]);

    reverseArray(array);

    printf("%d %d %d %d %d %d", array[0], array[1], array[2], array[3], array[4], array[5]);

    return 0;
}

void reverseArray(int ptr[])
{
    int tmp = 0, i = 0;

    for(i = 0; i < 3; i++)
    {
        tmp = ptr[i];
        ptr[i] = ptr[5-i];
        ptr[5-i] = tmp;
    }
}