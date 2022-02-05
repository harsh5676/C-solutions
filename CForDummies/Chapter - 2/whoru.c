#include <stdio.h>

void main()
{
    char me[20];

    printf("What is your name?\n");
    scanf("%s", &me);
    printf("Darn glad to meet you, %s!\n", me);
}