/*
0
Write a program which takes input from the user and ask user to choose 0 for triangular star pattern and 1 for reversed triangular star pattern and then print the pattern accordingly.

Example -

*
**
***
****
***** -> Triangular star pattern

*****
****
***
**
*     -> Reversed Triangular star pattern

*/

#include <stdio.h>

int main()
{
    int i, j, num, n;

    printf("Press 0 to print triangular star pattern and press 1 to print reversed triangular star pattern.\n");
    scanf("%d", &num);

    printf("Enter the number of desired columns or rows in the pattern.\n");
    scanf("%d", &n);

    if (num == 0)
    {
        for (i = 1; i <= n; i++)
        {

            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
                printf("\n");
        }
    }

    else if (num == 1)
    {
        for (i = 1; i <= n; i++)
        {
            printf("*");

            for (j = 0; j < n - i; j++)
            {
                printf("*");
            }
                printf("\n");
        }
    }

    return 0;
}