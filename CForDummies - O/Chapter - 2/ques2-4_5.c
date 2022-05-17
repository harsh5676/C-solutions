/*
madlib1.c Source Code
Written by Harsh
*/

#include <stdio.h>

void main()
{
    char adjective[20];
    char food[20];
    char chore[20];
    char furniture[20];

    /* Get the words to use in the madlib */

    printf("Enter an adjective:\n");
    gets(adjective);
    printf("Enter a food:\n");
    gets(food);
    printf("Enter a household chore (past tense):\n");
    gets(chore);
    printf("Enter an item of furniture:\n");
    gets(furniture);

    /* Display the output */

    printf("\n\nDon't touch that %s %s!\n", adjective, food);
    printf("I just %s the %s!\n", chore, furniture);
}