#include <stdio.h>
#include <conio.h>

void dropBomb(); // The devious prototype

void main()
{
    char x;
    printf("Press any key to drop bomb:");
    x = getchar();
    dropBomb();
    printf("\nYou pressed the '%c' key to kill all those people.!\n", x);
}

void dropBomb()
{
    int x;

    for (x = 0; x < 15; x++)
    {
        printf("\nWeee!");
    }
    printf("\nSplat!!");
}