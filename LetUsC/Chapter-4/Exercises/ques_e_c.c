/*
Write a program to find the greatest of the three numbers entered through the keyboard. Use conditional operators.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c, big;
    printf("Enter three numbers -\n");
    scanf("%d%d%d", &a, &b, &c);

    big = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("The Greatest of the three numbers is %d.\n", big);

    getch();
    return 0;
}