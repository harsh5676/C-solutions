#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int a, i = 0;
    int *i2;
    while (i < 455)
    {
        printf("Welcome!\n");
        i2 = malloc(34444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(i2); // Without this we will encounter the situation of memory leak.
    }
    getch();
    return 0;
}