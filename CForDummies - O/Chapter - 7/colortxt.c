/* Colorful text program for Borland users only */

#include <stdio.h>
#include <conio.h>

void mian()
{
    int foreground, background;

    for (foreground = 0; foreground <= 15; foreground++)
    {
        for (background = 0; background <= 7; background++)
        {
            textcolor(foreground);
            textbackground(background);
            cprintf("TEXT!");
        }
        putchar('\n');
    }
}