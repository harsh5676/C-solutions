/*
Compute value of one number raised to another.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    float x, power;
    int y, i;
    printf("Enter two numbers -\n");
    scanf("%f%d", &x, &y);
    power = i = 1;
    while (i <= y) // 1<=2  2<=2
    {
        power = power * x; // 5
        i++;
    }
    printf("%f to the power %d is %f\n", x, y, power);
    getch();
    return 0;
}
