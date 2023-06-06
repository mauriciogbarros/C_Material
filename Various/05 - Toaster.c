/*
You are programming a toaster! The toaster does not have a lot of memory, so you need to be carefull about the data types you used (remember that different data types use different amounts of memory). To make this easier, you'd like an easy way to track how much memory your variables are going to use.

Your job is to write a program that shows, in human-readable form (see below for specifics), how much memory a set of variables of a certain type will use. Your program should read a character that identifies the data type ('i' for int, 's' for short, 'c' for char, 'd' for double). Next, it should read an integer that indicates how many variables of the given type you wish to store.

Your program should then calculate the amount of memory required to store the given variables. Your program needs to be written in such a way that it would also perform correctly on other computers. In other words, rather than hard-coding specific sizes for the different variable types, your program needs to use the "sizeof()" function to determine how much memory an individual variable of a given type needs.

Finally, you need to output the amount of space required by your variables to the screen. You need to make sure you provide this output in a form that is easy to read for humans.
*/

#include <stdio.h>

int main(void)
{
    char dataType = '\0';
    int nVariables = 0, mb = 0, kb = 0, b = 0;
    double memoryRequired = 0;

    scanf("%c %d", &dataType, &nVariables);

    switch(dataType)
    {
        case 'i':
            memoryRequired += sizeof(int);
            break;
        
        case 's':
            memoryRequired += sizeof(short);
            break;

        case 'c':
            memoryRequired += sizeof(char);
            break;

        case 'd':
            memoryRequired += sizeof(double);
            break;
    }

    memoryRequired *= nVariables;
    mb = (int)(memoryRequired/1000000);
    memoryRequired = memoryRequired - mb*1000000;
    kb = (int)(memoryRequired/1000);
    b = (int)(memoryRequired - kb*1000);

    if(mb > 0) printf("%d MB and ", mb);
    if(kb > 0) printf("%d KB and ", kb);
    printf("%d B", b);

    return 0;
}