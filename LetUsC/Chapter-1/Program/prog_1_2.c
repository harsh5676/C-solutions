/* Conversion of Distance */

#include<stdio.h>

int main()
{
    float km, m, cm, feet, inch;
    printf("Enter the distance between two cities in km - \n");
    scanf("%f", &km);
    m = km * 1000;
    cm = m * 100;
    inch = cm / 2.54;
    feet = inch / 12;
    // inch = cm * 0.39;
    // feet = inch * 0.08;
    printf("\nDistance in meters = %f\n\n", m);
    printf("Distance in centimeters = %f\n\n", cm);
    printf("Distance in feet = %f\n\n", feet);
    printf("Distance in inches = %f\n\n", inch);
    return 0;
}