#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int x = 4, y = 3, z;
    z = x-- - y;
    printf("%d %d %d\n", x, y, z);
    getch();
    return 0;
}