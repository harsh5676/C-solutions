/* Program to calculate all the trigonometric ratios of the angle entered by the user. */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, s, c, t;

    /* Taking Input */

    printf("Enter the angle - \n");
    scanf("%f", &a);

    /* Calculation */

    a = a * 3.14 / 180;

    s = sin(a);
    c = cos(a);
    t = tan(a);

    /* Printing Output */

    printf("The value of - \nsin = %f \ncos = %f \ntan = %f", s, c, t);

    return 0;
}