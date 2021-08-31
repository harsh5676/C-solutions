/* Program to receive Cartesian co-ordinates of a point and convert them into Polar co-ordinates */

#include <stdio.h>
#include <math.h>

int main()
{
    float r, theta, x, y;

    printf("\nProgram to receive Cartesian co-ordinates of a point and convert them into Polar co-ordinates\n\n");
    
    /* Taking Input */

    printf("Enter the x co-ordinate -\n");
    scanf("%f", &x);
    
    printf("Enter the y co-ordinate -\n");
    scanf("%f", &y);
    
    /* Calculation */
    
    r = sqrt( x * x + y * y);
    theta = atan2( y, x);
    theta = theta * 180 / 3.14; /* Converting into degrees */

    /* Printing Output */

    printf("\nr = %f \ntheta = %f", r, theta);
    return 0;
}