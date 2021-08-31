/* Reverse digits of five digits - number */

#include <stdio.h>

int main()
{
    int n, d5, d4, d3, d2, d1;
    long int revnum;
    printf("\nEnter a five digit number (less than 32767): \n");    /* It works fine in this PC when we take number greater than 32767 */ 
    scanf("%d", &n);
    
    d5 = n % 10;    /* 5th Digit */
    n = n / 10;     /* Remaining Digits */

    d4 = n % 10;    /* 4th Digit */
    n = n / 10;     /* Remaining Digits */

    d3 = n % 10;    /* 3rd Digit */
    n = n / 10;     /* Remaining Digits */

    d2 = n % 10;    /* 2nd Digit */
    n = n / 10;     /* Remaining Digits */

    d1 = n % 10;    /* 1st Digit */

    revnum = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
    /* Specifier %ld is used for printing a long integer */
    printf("The reversed number is %ld.\n", revnum);

    return 0;
}