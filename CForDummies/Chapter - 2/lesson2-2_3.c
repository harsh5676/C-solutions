#include <stdio.h>

void main()
{
    char name[20];
    printf("What is your name?\n");
    scanf("%s", name);
    printf("%s? My name is %s too.\n", name, name);
}