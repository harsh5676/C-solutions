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

    angle = (angle * 3.142857) / 180;
    s = sin(angle);
    c = cos(angle);
    sum = pow(s, 2) + pow(c, 2);

    // Printing Output

    if (sum == 1)
        printf("The sum of squares of sine and cosine of this angle is equal to 1.\n");
    else
        printf("The sum of squares of sine and cosine of this angle is not equal to 1.\n");
    getch();
    return 0;
}