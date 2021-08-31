/* Program to calculate wind chill factor by the following formula - 
 wcf = 35.74 + 0.6215t + (0.4275t - 35.75) * v ^ 0.16 */

#include <stdio.h>
#include <math.h>

int main()
{
    float wcf, temp, vel;

    /* Input Values */

    printf("Enter the Temperature -\n");
    scanf("%f", &temp);

    printf("Enter the Velocity -\n");
    scanf("%f", &vel);

    /* Calculation */

    wcf = 35.74 + 0.6215 * temp + (0.4275 * temp - 35.75) * pow(vel, 0.16);

    /* Printing Output */

    printf("\nThe value of wind chill factor is - %f\n", wcf);

    return 0;
}