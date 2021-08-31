/* Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. */

/* Check whether a year is leap or not. */

#include <stdio.h>

int main()
{
    int yr;
    printf("\nEnter a year :\n");
    scanf("%d", &yr);
    if (yr % 100 == 0)
    {
        if(yr % 400 == 0)
            printf("Leap Year\n");
        else
            printf("Not a Leap Year\n");
    }
    else
    {
        if(yr % 4 == 0)
            printf("Leap Year\n");
        else
            printf("Not a Leap Year\n");     
    }
    
    
    return 0;
}