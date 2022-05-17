#include <stdio.h>

void main()
{
    int a;
    char b;

    printf("Here is thy grid...\n");

    for (a = 1; a < 10; a++)
    {
        for (b = 'A'; b < 'K'; b++)
        {
            printf("%i - %c  ", a, b);
        }
        putchar('\n'); // end of line
    }
}