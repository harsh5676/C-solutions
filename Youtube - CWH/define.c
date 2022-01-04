#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define PI 3.14;
#define SQUARE(r) r *r;

int main()
{
    system("cls");
    float var = PI;
    int r = 4;
    int s = SQUARE(r);
    printf("The value of PI is %f.\n", var);
    printf("The area of the circle is %f.\n", var * s);
    getch();
    return 0;
}