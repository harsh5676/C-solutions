#include <stdio.h>

void main()
{
    char zodiac[20];
    printf("What is your zodiac sign?\n");
    gets(zodiac);
    printf("Hey, babe! I'm %s too!\n", zodiac);
}