#include <stdio.h>

int main(void)
{
    char text[68][41];
    int word = 0;

    for(word = 0; word < 68; word++)
        scanf("%s ", text[word]);
    printf("\n");

    for(word = 1; word <= 68; word++)
        printf("%s ", text[68-word]);

    return 0;
}