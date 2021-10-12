/*
If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid or not. The triangle is valid if the sum of two sides is greater than the largest of the three sides.
*/

/* Check whether a triangle is valid or not */

#include <stdio.h>

int main()
{
    int s1, s2, s3, ls, sum;
    printf("\nEnter three sides of the triangle:\n");
    scanf("%d%d%d", &s1, &s2, &s3);

    if(s1 > s2)
    {
        if (s1 > s3)
        {
            sum = s2 + s3;
            ls = s1;
        }
        else
        {
            sum = s1 + s2;
            ls = s3;
        }
    }
    else
    {
        if (s2 > s3)
        {
            sum = s1 + s3;
            ls = s2;
        }
        else
        {
            sum = s1 + s2;
            ls = s3;
        }
    }
    if (sum > ls)
    {
        printf("The triangle is valid\n");
    }
    else
    {
        printf("The triangle is an invalid triangle\n");
    }
    
    return 0;
}