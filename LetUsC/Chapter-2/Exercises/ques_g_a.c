/* Program to calculate the sum of the digits of a five digit number entered by the user */

#include <stdio.h>

int main()
{
    int n, n1, n2, n3, n4, n5, sum;

    /* Taking Input from the user */

    printf("Enter five digit number -\n");
    scanf("%d", &n);

    /* Calculation */
    
    n1 = n % 10; 
    n = n / 10;  

    n2 = n % 10; 
    n = n / 10;  
    
    n3 = n % 10;
    n = n / 10;  
    
    n4 = n % 10; 
    n = n / 10;  
    
    n5 = n % 10;

    sum = n1 + n2 + n3 + n4 + n5;

    /* Printing Output */

    printf("The sum of the digits of the five - digit number entered -\n %d", sum);

    return 0;
}