#include <stdio.h>
#include <stdlib.h>

void main()
{
    int tax1, tax2;
    char height[4], temp[4], favnum[4];

    printf("Enter your height in inches: ");
    gets(height);
    printf("What temperature is it outside? ");
    gets(temp);
    printf("Enter your favourite number: ");
    gets(favnum);

    tax1 = atoi(height) * atoi(favnum);
    tax2 = atoi(temp) * atoi(favnum);

    if (tax1 > tax2)
    {
        printf("You owe $%i in taxes.\n", tax1 * 10);
    }
    else
    {
        printf("You owe $%i in taxes.\n", tax2 * 10);
    }
}