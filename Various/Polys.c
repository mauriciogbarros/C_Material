#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) 
{
    struct point * polygon;
    int N;

    scanf("%d", &N);
    polygon = (struct point *)malloc(N * sizeof(struct point));

    initializePoly(polygon, N);

    printPoly(polygon, N);

    free(polygon);

    return 0;
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

void initializePoly(struct point *ptr, int N)
{
    int i;
    for(i = 0; i < N; i++)
    {
        ptr[i].x = -i;
        ptr[i].y = i*i;
    }
}
