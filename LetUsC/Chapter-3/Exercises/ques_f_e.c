/*
Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.
*/

#include <stdio.h>

int main()
{
    int l, b, a, p;

    /* Enter Values */

    printf("Enter the length of the rectangle -\n");
    scanf("%d", &l);
    
    printf("Enter the breadth of the rectangle -\n");
    scanf("%d", &b);

    /* Calculation */

    a = l * b;
    p = 2 * (l + b);

    /* Output Values */

    printf("The area of the rectangle is %d and its perimeter is %d.\n", a, p);

    if (a > p)
    {
        printf("Area of the rectangle is greater than its perimeter.\n");
    }
    else
    {
        printf("Perimeter of the rectangle is greater than its area.\n");
    }
    

    return 0;
}