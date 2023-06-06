#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr); 
void printStudents(struct student *start);
void freeStudents(struct student *start);

int main(void) {
    struct student *start, *newStudptr, *end;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);

    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);
    freeStudents(start);

    return 0;
}

struct student *createStudent(char studentName[], int studentAge)
{
    struct student * ptr = (struct student *)malloc(sizeof(struct student));
    strcpy(ptr->name,studentName);
    ptr->age = studentAge;
    ptr->next = NULL;

    return ptr;
}

struct student *append(struct student * end, struct student * newStudptr)
{
    end->next = newStudptr;
    return newStudptr;
}

void printStudents(struct student *start)
{
    struct student *last = start;

    while(last->next != NULL)
    {
        printf("%s is %d years old.\n", last->name, last->age);
        last = last->next;
    }
    printf("%s is %d years old.\n", last->name, last->age);
}

void freeStudents(struct student *start)
{
    struct student *next = start, *last;

    while(next != NULL)
    {
        last = next->next;
        free(next);
        next = last;
    }
}