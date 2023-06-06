#include <stdio.h>

void reset(int *, int);
// Or: void reset(int [], int)

int main(void)
{
    // How to use pointers and arrays with functions
    int arr[3] = {15, 16, 17};

    printf("First element: %d\n", arr[1]);
    printf("Second element: %d\n", arr[1]);
    printf("Third element: %d\n", arr[2]);
    printf("\n");

    reset(arr, 3);
    printf("Reset\n");
    printf("First element: %d\n", arr[1]);
    printf("Second element: %d\n", arr[1]);
    printf("Trhid element: %d\n", arr[2]);

    return 0;
}

void reset(int *ptr, int size)
// Or: void reset(int ptr[], int size)
{
    int i = 0;
    for(i = 0; i < size; i++)
    {
        ptr[i] = 0;
        // Same as *(ptr + i) = 0
    }
}