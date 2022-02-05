/*
Determine overtime pay of 10 employees.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    float otpay;
    int hour, i = 1;
    while (i <= 10) /* Loop for 10 employees. */
    {
        printf("\nEnter no. of hours worked: ");
        scanf("%d", &hour);
        if (hour >= 40)
            otpay = (hour - 40) * 12;
        else
            otpay = 0;
        printf("Hours = %d\nOvertime pay = Rs. %f\n", hour, otpay);
        i++;
    }
    getch();
    return 0;
}