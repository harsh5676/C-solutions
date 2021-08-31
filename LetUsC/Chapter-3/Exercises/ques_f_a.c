/* 
A five - digit number is entered through the keyboard. Write a program to obtain the reversed number 
and to determine whether the original and reversed numbers are equal or not. 
*/

#include <stdio.h>

int main()
{
    /* Taking Input */

    int n, n1, n2, n3, n4, n5, num, revnum;
    printf("Enter the Five - Digit Number -\n");
    scanf("%d", &n);
    num = n;

    /* Calculation */

    n5 = n % 10;
    n = n / 10;
    
    n4 = n % 10;
    n = n / 10;
    
    n3 = n % 10;
    n = n / 10;
    
    n2 = n % 10;
    n = n / 10;
    
    n1 = n % 10;
    revnum = 10000 * n5 + 1000 * n4 + 100 * n3 + 10 * n2 + n1;

    /* Printing Output */
    
    printf("The Reversed Number of %d is %d.\n", num, revnum);

    if (num == revnum)
    {
        printf("The number entered and its reversed number is equal.\n");
    }
    else
    {
        printf("The number entered and its reversed number is not equal.\n");
    }
       
    return 0;
}