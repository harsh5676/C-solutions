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
    scanf("%s", adjective);
    printf("Enter a food:\n");
    scanf("%s", food);
    printf("Enter a household chore (past tense):\n");
    scanf("%s", chore);
    printf("Enter an item of furniture:\n");
    scanf("%s", furniture);

    /* Display the output */

    printf("\n\nDon't touch that %s %s!\n", adjective, food);
    printf("I just %s the %s!\n", chore, furniture);
}