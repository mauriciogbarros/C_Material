#include <stdio.h>
#include <stdlib.h>

struct Point
{
    int x;
    int y;
    struct Point * next;
};

struct Point * allocatePoints(int * nPoints);
void inputPoints(struct Point * points, int nPoints);
void printPoints(struct Point * point);
void append(struct Point * points, int nPoints);
// void freePoints(struct Point * point);

int main(void)
{
    int nPoints = 0;
    struct Point * points, * end;

    points = allocatePoints(&nPoints);

    inputPoints(points, nPoints);

    append(points, nPoints);

    printPoints(&points[0]);

    //freePoints(&points[0]);
    free(&points[0]);

    return 0;
}

struct Point * allocatePoints(int * nPoints)
{
    printf("How many points? ");
    scanf("%d", nPoints);
    printf("\n");

    return (struct Point *)malloc((*nPoints) * sizeof(struct Point));
}

void inputPoints(struct Point * points, int nPoints)
{
    int i = 0;

    for(i = 0; i < nPoints; i++)
    {
        printf("Enter x%d,y%d: ", i + 1, i + 1);
        scanf("%d,%d", &points[i].x, &points[i].y);
        points[i].next = NULL;
    }
}

void printPoints(struct Point * point)
{
    struct Point * ptr = point;

    while(ptr != NULL)
    {
        printf("(%d,%d)\n", ptr->x, ptr->y);
        ptr = ptr->next;
    }
}

void append(struct Point * points, int nPoints)
{
    int i = 0;

    for(i = 0; i < nPoints-1; i++)
        points[i].next = &points[i+1];
}

// void freePoints(struct Point * point)
// {
//     struct Point * ptr = point;

//     while(ptr != NULL)
//     {
//         point = ptr;
//         ptr = ptr->next;
//         free(point);
//     }
// }