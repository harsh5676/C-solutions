#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int count = 1, z = 0;
    while ('a' < 'b' && z < 10)
    {
        printf("It is what it is!\n");
        z = count++;
    }
    getch();
    return 0;
}