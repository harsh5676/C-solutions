#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    float x = 1.1;
    while (x == 1.1)
    {
        printf("%f\n", x);
        x = x - 0.1;
    }
    return 0;
}