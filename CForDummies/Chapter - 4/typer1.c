#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;

    printf("Press the ~ key to stop\n");

    for (;;)
    {
        ch = getche();
        if (ch == '~')
        {
            break;
        }
    }
    printf("\nDone!\n");
}