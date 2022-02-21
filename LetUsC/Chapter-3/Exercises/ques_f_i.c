/*
According to Gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int ref_yr = 1900, diff, yr, leap = 0, tot_days = 0, days = 0;

    /* Input Values */

    printf("Enter a year between 1900 and 2099 -\n");
    scanf("%d", &yr);

    /* Calculation */

    diff = yr - ref_yr; // To find out the total number of years between the reference year and the year provided by the user.

    while (ref_yr < yr) /* To find out the total number of leap years between the reference year
                        and the year provided by the user.*/
    {
        if (ref_yr % 100 == 0)
        {
            if (ref_yr % 400 == 0)
            {
                leap++;
            }
        }
        else
        {
            if (ref_yr % 4 == 0)
            {
                leap++;
            }
        }
        ref_yr++;
    }

    tot_days = (diff - leap) * 365 + leap * 366; /*Total number of days from the reference year to
                                                 the year provided by the user.*/
    days = tot_days % 7;

    /* Printing Output */

    printf("\nThe day on 1st January %d was ", yr);

    if (days == 0)
    {
        printf("Monday.\n");
    }
    else if (days == 1)
    {
        printf("Tuesday.\n");
    }
    else if (days == 2)
    {
        printf("Wednesday.\n");
    }
    else if (days == 3)
    {
        printf("Thursday.\n");
    }
    else if (days == 4)
    {
        printf("Friday.\n");
    }
    else if (days == 5)
    {
        printf("Saturday.\n");
    }
    else if (days == 6)
    {
        printf("Sunday.\n");
    }
    else
    {
        printf("Invalid Entry.\n");
    }

    return 0;
}