#include <stdio.h>

void dropBomb(void);

int killed;

void main()
{
    char x;

    killed = 0;

    for (;;)
    {
        printf("Press ~ to end your mission\n");
        printf("Press any key to drop bomb:\n");
        x = getchar();
        if (x == '~')
        {
            break;
        }
        dropBomb();
        printf("\n%i people killed!\n", killed);
    }
}

void dropBomb()
{
    int x;

    for (x = 0; x < 15; x++)
    {
        printf("\nWeee!");
    }
    printf("\nSplat!!");
    killed += 15;
}