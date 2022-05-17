#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;

    printf("Press the ~ key to stop\n");

    while (ch != '~')
    {
        ch = getche();
    }
    printf("\nDone!\n");
}