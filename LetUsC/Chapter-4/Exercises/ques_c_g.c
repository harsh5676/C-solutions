#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 5, b = 6;
    (a == b ? printf("%d\n", a) : printf("to eliminate error")); //  (a == b ? printf("%d\n", a));  Wrong ? must be used with : operator
    getch();
    return 0;
}