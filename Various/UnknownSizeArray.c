#include <stdio.h>
#include <stdlib.h>

int *allocateIntArray(int);
double calculateAverage(int*, int);

int main(void)
{
    int numElements, i;
    int * array;
    double average;

    printf("How many grades would you like to enter? ");
    scanf("%d", &numElements);
    array = allocateIntArray(numElements);

    for(i = 0; i < numElements; i++)
    {
        printf("Please enter grade %d: ", i);
        scanf("%d", array + i);
    }

    average = calculateAverage(array, numElements);
    printf("The average grade is %.2lf.\n", average);

    free(array);
    return 0;
}

int *allocateIntArray(int numberOfElements)
{
    return (int*)malloc(numberOfElements*sizeof(int));
}

double calculateAverage(int *intArray, int numberOfElements)
{
    int i = 0, total = 0;

    for(i = 0; i < numberOfElements; i++)
        total += intArray[i];

    return (double)total/numberOfElements;
}