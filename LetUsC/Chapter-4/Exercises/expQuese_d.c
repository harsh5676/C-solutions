/*
Write a program to receive value of an angle in degrees and check whether sum of squares of sine and cosine of this angle is equl to 1.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float angle, sum, s, c;
    printf("Enter angle in degrees -\n");
    scanf("%f", &angle);

    // Calculation

    angle = (angle * (22 / 7)) / 180;
    s = sin(angle);
    c = cos(angle);
    sum = pow(s, 2) + pow(c, 2);

    // Printing Output

    sum == 1 ? printf("true") : printf("false");
    getch();
    return 0;
}