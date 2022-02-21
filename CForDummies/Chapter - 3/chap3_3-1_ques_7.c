#include <stdio.h>
#include <stdlib.h>

void main()
{
    int age;
    char yr[8];
    printf("What is your age?\n");
    gets(yr);
    age = atoi(yr);
    printf("Your age is %d\n", age);
}