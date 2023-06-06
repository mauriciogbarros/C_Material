#include <stdio.h>
#include <stdlib.h>

struct Point
{
    int x;
    int y;
};

struct Shape
{
    struct Point *point;
    int sides;
};

void inputSides(struct Shape * shape);
struct Point * allocateShape(int sides);
void inputCoordinates(struct Shape * shape);
void printCoordinates(struct Shape shape);
void printPoints(struct Shape shape);
void printShape(struct Shape shape);

int main(void)
{
    int i = 0;
    struct Shape shape;

    inputSides(&shape);

    shape.point = allocateShape(shape.sides);

    inputCoordinates(&shape);

    printShape(shape);


    free(shape.point);

    return 0;
}

void inputSides(struct Shape * shape)
{
    printf("Enter sides: ");
    scanf("%d", &shape->sides);
    printf("\n");
}

struct Point * allocateShape(int sides)
{
    return (struct Point *)malloc(sides * sizeof(struct Point));
}

void inputCoordinates(struct Shape * shape)
{
    int i = 0;

    for(i = 0; i < shape->sides; i++)
    {
        printf("Coordinate %d => enter x,y: ", i + 1);
        scanf("%d,%d", &shape->point[i].x, &shape->point[i].y);
    }
    printf("\n");
}

void printCoordinates(struct Shape shape)
{
    int i = 0;

    for(i = 0; i < shape.sides; i++)
        printf("Coordinate %d: (%d,%d)\n", i + 1, shape.point[i].x, shape.point[i].y);
    
    printf("\n");
}

void printPoints(struct Shape shape)
{
    printf("Print Points\n");
    // int i = 0, j = 0;
    // char point = "X", dot = "+";

    // for(i = 0; i < shape.sides; i++)
    // {
    //     for(j = 0; j < shape.point[i].y; j++)
    //         printf("\n");
        
    //     j = 0;
    //     while(j < shape.point[i].x)
    //     {
    //         printf(" ");
    //         j++;
    //     }
    // }
    printf("\n");
}

void printShape(struct Shape shape)
{
    printCoordinates(shape);
    printPoints(shape);
}