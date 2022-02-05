/*
Calculation of factorial value of a number.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int num, i, fact;
    printf("Enter a number: \n");
    scanf("%d", &num);
    fact = i = 1;
    while (i <= num)
    {
        fact = fact * i;
        i++;
    }
    printf("Factorial value of %d = %d\n", num, fact);
    getch();
    return 0;
}