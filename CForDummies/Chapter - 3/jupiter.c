#include <stdio.h>

void main()
{
    float lightyear = 5.878E12;
    float jupiter = 483400000;
    float distance;

    distance = jupiter / lightyear;

    printf("Jupiter is %e lightyears from the sun.\n", distance); // In scientific notation
    printf("Jupiter is %f lightyears from the sun.\n", distance);
}