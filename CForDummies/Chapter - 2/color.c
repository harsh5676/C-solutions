#include <stdio.h>

void main()
{
    char name[20];
    char color[20];

    printf("What is your name?\n");
    scanf("%s", name);
    printf("What is your favourite color?\n");
    scanf("%s", color);
    printf("%s's favourite color is %s.\n", name, color);
}