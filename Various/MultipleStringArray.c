#include <stdio.h>

int main(void)
{
    char words[3][10];

    printf("Please enter three words: ");
    for(int i = 0; i < 3; i++)
        scanf("%s", words[i]);
    printf("\n");

    printf("You entered: \n");
    for(int i = 0; i < 3; i++)
        printf("%s ", words[i]);
    printf("\n");

    printf("First letters: \n");
    for(int i = 0; i < 3; i++)
        printf("\"%s\" starts with the letter '%c'.\n", words[i], words[i][0]);    

    return 0;
}