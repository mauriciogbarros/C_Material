#include <stdio.h>

int main(void)
{
    // The name of the array "arr" is the address of the first element.
    int arr[3] = {15, 16, 17};
    printf("%p\n", arr);
    printf("First element: %d\n", arr[0]);
    printf("Second element: %d\n", arr[1]);
    printf("Third element: %d\n\n", arr[2]);

    // You can use de-referencing directly on the array
    *arr = 2;
    printf("First element: %d\n", arr[0]);

    // To access and de-reference the other items of the array
    *(arr + 1) = 3;
    *(arr + 2) = 4;
    printf("Second element: %d\n", arr[1]);
    printf("Third element: %d\n\n", arr[2]);

    int array[] = {4, 6, 12, -5, -7, 3, 1, 0, -10};
    int *ptr1, *ptr2;
    ptr1 = array + 2;
    ptr2 = &ptr1[5];
    printf("*(ptr1+1) = %d\n", *(ptr1+1));
    printf("*(ptr2-3) = %d\n", *(ptr2-3));

    return 0;
}