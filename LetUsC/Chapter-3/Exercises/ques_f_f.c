/*
Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

Solution - 

Slope of points (x1, y1) and (x2, y2) = m;

m = (y2 – y1) / (x2 – x1);

Slope of points (x2, y2) and (x3, y3) = n;

n = (y3 – y2) / (x3 – x2);

If m = n, the points are co-linear, or in a straight line.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, x3, y1, y2, y3, m, n;

    /* Taking Input */
    
    printf("Enter points x1 and y1 -\n");
    scanf("%f%f", &x1, &y1);
    
    printf("Enter points x2 and y2 -\n");
    scanf("%f%f", &x2, &y2);
    
    printf("Enter points x3 and y3 -\n");
    scanf("%f%f", &x3, &y3);

    /* Calculation */

    m = abs((y2 - y1) / (x2 - x1));
    n = abs((y3 - y2) / (x3 - x2));

    /* Printing Output */

    if (m == n)
    {
        printf("The given points lie in a straight line.\n");
    }
    else
    {
        printf("The given points do not lie in a straight line.\n");
    }
    

    return 0;
}