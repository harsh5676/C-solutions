#include <stdio.h>
#include <conio.h>

void main()
{
    char a, b;

    printf("Which character is greater? \n");
    printf("Type a single character: ");
    a = getche();
    printf("\nType another character: ");
    b = getche();

    if (a > b)
    {
        printf("\n '%c' is greater than '%c'!\n", a, b);
    }
    else if (b > a)
    {
        printf("\n'%c' is greater than '%c'!\n", b, a);
    }
    else
    {
        printf("\nNext time, don't type the same character twice.\n");
    }
}