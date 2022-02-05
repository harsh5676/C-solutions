#include <stdio.h>
#include <conio.h>

int main()
{
    int year, pyear = 2022;
    printf("enter the year you want to check for the leap year");
    scanf("%d", &year);

    if (year == pyear)
        printf("the current year is not leap year");

    if (year % 4 == 0)
    {
        if (year < pyear)
            printf("the entered year %d was a leap year\n", year);

        else
            printf("the entered year %d is going to be a leap year\n", year);
    }
    else
    {
        if (year < pyear)
            printf("the entered year %d was not a leap year\n", year);

        else
            printf("the entered year %d is not going to be a leap year\n", year);
    }
}
