/*
Write a program to receive value of an angle in degrees and check whether sum of squares of sine and cosine of this angle is equl to 1.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int angle, sum, s, c;
    printf("Enter angle in degrees -\n");
    scanf("%d", &angle);

    // Calculation

    angle = (angle * 3.14) / 180;
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