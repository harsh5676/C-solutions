#include <stdio.h>
#include <stdlib.h>

void main()
{
    int age;
    char years[8];

    printf("How old was Methuselah?\n");
    gets(years);
    age = atoi(years);
    printf("Methuselah was %i yeaars old.\n", age);
}