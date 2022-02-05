#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int x = 4, y, z;
    y = --x;
    z = x--;
    printf("%d, %d, %d", x, y, z);
    getch();
    return 0;
}