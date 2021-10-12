/*
If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is isosceles, equilateral, scalene or right angled triangle.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int s1, s2, s3, p1, p2, p3, t1, t2, t3;
    printf("Enter the three sides of a triangle -\n");
    scanf("%d%d%d", &s1, &s2, &s3);
    p1 = pow(s1, 2);
    p2 = pow(s2, 2);
    p3 = pow(s3, 2);
    // t1 = p2 + p3;
    // t2 = p1 + p3;
    // t3 = p1 + p2;
    if (s1 == s2 && s2 == s3)
        printf("It is an equilateral triangle.\n");
    else if (p1 == p2 + p3 || p2 == p1 + p3 || p3 == p1 + p2) //  else if (p1 == t1 || p2 == t2 || p3 == t3)
        printf("It is a right angled triangle.\n");
    else if (s1 == s2 || s2 == s3 || s1 == s3)
        printf("It is an isosceles triangle\n");
    else if (s1 != s2 && s2 != s3 && s1 != s3)
        printf("It is a scalene triangle.\n");
    getch();
    return 0;
}
