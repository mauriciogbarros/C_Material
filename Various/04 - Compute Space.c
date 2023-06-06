/*
A delivery company has hired you to manage their tracking services division. It is your job to store all of the currently used tracking codes in the company's database. These codes consist of either all integers, all decimal numbers, or all characters. The chief techonology office has warnd you that the database is old and has limited space, so you want to determine how much memory the tracking codes will occupy before storing them. You decide to write a program to assist you in this process.

Your program should first read an integer number indicating how many tracking codes you plan on entering. Next, for each successive tracking code, your program should read in the integer length of code followed by a space and then type of code('i' for integer, 'd' for decimal, or 'c' for character). Finally, your program should print the total amount of space required to store all of the tracking codes (in bytes). If the user enters an incorrect type for any tracking number, the program should print 'Invalid tracking code type' and exit.
*/

#include <stdio.h>

int main(void)
{
    int nCodes = 0, codeLength = 0, nBytes = 0, invalid = 0;
    int i = 0;
    char codeType = '\0';

    scanf("%d", &nCodes);
    
    for(i = 0; i < nCodes; i++)
    {
        scanf("%d %c", &codeLength, &codeType);

        switch(codeType)
        {
        case 'i':
            nBytes += codeLength * sizeof(int);
            break;

        case 'd':
            nBytes += codeLength * sizeof(double);
            break;

        case 'c':
            nBytes += codeLength * sizeof(char);
            break;

        default:
            invalid = 1;
            break;
        }
    }

    if (!invalid)
    {
        printf("%d bytes", nBytes);
    }
    else
    {
        printf("Invalid tracking code type");
    }

    return 0;
}