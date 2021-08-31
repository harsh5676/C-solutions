/*
Given the coordinates (x, y) of center of a circle and its radius, write a program that will determine whether a point lies inside the circle, on the circle or outside the circle. (Hint: Use sqrt() and pow() functions).
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, c, r;

    /* Taking Input */

    printf("Enter the radius of the circle -\n");
    scanf("%d", &r);

    printf("Enter the coordinates (x, y) of the point whose position is to be determined -\n");
    scanf("%d%d", &x, &y);

    /* Calculation */

    c = sqrt(pow(x, 2) + pow(y, 2));

    /* Printing Values */

    if (c > r)
    {
        printf("The point lies outside of the circle.\n");
    }
    if (c == r)
    {
        printf("The point lies on the circle.\n");
    }
    if (c < r)
    {
        printf("The point lies inside of the circle.\n");
    }
     
    return 0;
}