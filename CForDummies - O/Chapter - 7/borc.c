#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    int x = 0;
    char c;

    while (x < 5)
    {
        x++; // loop counter
        printf("\n%i: Press B to break, C to continue: ", x);
        c = toupper(getch()); // getkey
        if (c == 'C')
        {
            putchar(c); // display C
            continue;   // loop repeats right here!
        }
        if (c == 'B')
        {
            putchar(c);
            break;
        }
        printf("%c is not B or C.", c);
    }
}