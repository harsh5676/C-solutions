#include <stdio.h>
#include <stdlib.h>

void main()
{
    int methus;
    int you;
    char years[8];

    printf("How old are you?\n");
    gets(years);
    you = atoi(years);

    printf("How old was Methuselah?\n");
    gets(years);
    methus = atoi(years);

    printf("You are %i years old.\n", you);
    printf("Methuselah was %i years old.\n", methus);
}