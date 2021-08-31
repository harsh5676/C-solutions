/*
Write a program to find the absolute value of a number entered through the keyboard.
*/

#include <stdio.h>

int main()
{
    int n;
    
    /* Input Value */

    printf("Enter the number -\n");
    scanf("%d", &n);

    /* Process */

    if (n < 0)
    {
        n = n * -1;
    }
    else
    {
        n = n;
    }

    printf("The absolute value of the number entered is %d.\n", n);
    
    return 0;
}