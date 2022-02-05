#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int x = 5, y, z;
    y = x++;
    z = ++x;
    printf("y: %d, z: %d", y, z);
    getch();
    return 0;
}