/*
Given a point (x, y) write a program to find out if it lies on the X - axis, Y - axis or on the origin.  
*/

#include <stdio.h>

int main()
{
    float x, y;

    /* Input Values */

    printf("Enter the x and y coordinates of the point -\n");
    scanf("%f%f", &x, &y);

    /* Calculation */

    if (x == 0 && y != 0)
    {
        printf("The given point lies on the Y - Axis.\n");
    }
    if (y == 0 && x != 0)
    {
        printf("The given point lies on the X - Axis.\n");
    }
    if (x == 0 && y == 0)
    {
        printf("The given point is at the origin.\n");
    }
    
    if (x != 0 && y != 0)
    {
        printf("The given point neither lies on the X - Axis nor on the Y - Axis.\n");
    }

    return 0;
}