#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int num = 1, count = 1;
    while (count <= 10)
    {
        num = num + 1;
        printf("%d\n", num);
        num = num + 1;
        count = count + 1;
    }
    getch();
    return 0;
}