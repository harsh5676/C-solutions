/* Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number. */

/* Check whether a number is even or odd */

#include <stdio.h>

int main()
{
    int n;
    printf("\nEnter any number: \n");
    scanf("%d", &n);
    if(n % 2 == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd\n");
    return 0;
}