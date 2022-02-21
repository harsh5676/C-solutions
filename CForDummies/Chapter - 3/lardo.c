#include <stdio.h>
#include <stdlib.h>

void main()
{
    char weight[4];
    int w;

    printf("Enter your weight: ");
    gets(weight);
    w = atoi(weight);

    printf("Here is what you weigh now: %i\n", w);
    w = w + 1;
    printf("Your weight after the potatoes: %i\n", w);
    w = w + 1;
    printf("Here you are after the mutton: %i\n", w);
    w = w + 8;
    printf("And your weight after dessert: %i pounds!\n", w);
    printf("Lardo!\n");
}