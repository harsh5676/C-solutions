/*
Write a program using conditional operators to determine whether a year entered through the keyboard is a leap year or not. 
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int year;
    printf("Enter year -\n");
    scanf("%d", &year);
    ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0)) ? printf("The year entered is a leap year\n") : printf("The year entered is not a leap year\n");
    getch();
    return 0;
}