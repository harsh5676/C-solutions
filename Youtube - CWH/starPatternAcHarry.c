/*

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

void starPattern(int rows)
{
    for (int i = 0; i < rows; i++) // 1 2
    {
        for (int j = 0; j <= i; j++) // 1
        {
            printf("*");
        }

        printf("\n");
    }
}

void reverseStarPattern(int rows)
{
    for (int i = 0; i < rows; i++) // 1 2
    {
        for (int j = 0; j <= rows - i - 1; j++) // 1
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    int rows, type;
    printf("Enter 0 for star pattern and 1 for reverse star pattern.\n");
    scanf("%d", &type);
    printf("How many rows do you want?\n");
    scanf("%d", &rows);

    switch (type)
    {
    case 0:
        starPattern(rows);
        break;

    case 1:
        reverseStarPattern(rows);
        break;

    default:
        printf("You have entered a invalid choice.");
        break;
    }

    // if(type == 0)
    // {
    //     starPattern(rows);
    // }
    // else if(type == 1)
    // {
    //     reverseStarPattern(rows);
    // }

    return 0;
}