/* Program which takes input through the keyboard into two locations C and D and interchanges the contents of C and D and then prints it. */

#include <stdio.h>

int main()
{
    int c, d, e;

    /* Taking Input */

    printf("Enter two numbers in location C and D - \n");
    scanf("%d%d", &c, &d);

    /* Swapping Numbers */

    e = c;
    c = d;
    d = e;

    /* Printing Output */
    printf("The numbers after swapping - \nc = %d \nd = %d", c, d);
    return 0;
}