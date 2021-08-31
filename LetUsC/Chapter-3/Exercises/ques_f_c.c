/*
Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered are entered through the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees.
*/

#include <stdio.h>

int main()
{
    int a1, a2, a3, tot;

    /* Input Values */

    printf("Enter the 1st angle of the triangle -\n");
    scanf("%d", &a1);
    
    printf("Enter the 2nd angle of the triangle -\n");
    scanf("%d", &a2);
    
    printf("Enter the 3rd angle of the triangle -\n");
    scanf("%d", &a3);

    /* Calculation */

    tot = a1 + a2 + a3;

    if (tot == 180)
    {
        printf("The triangle with the following angles is valid.\n");
    }
    else
    {
        printf("The triangle with the following angles is not valid.\n");
    }
    
    return 0;
}