/* Calculating Gross Salary */

#include <stdio.h>

int main()
{
    float bs, da, hra, grsal;
    printf("\nEnter Basic Salary of Ramesh:");
    scanf("%f", &bs);
    da = 0.4 * bs;
    hra = 0.2 * bs;
    grsal = bs + da + hra;
    printf("Basic Salary of Ramesh = %f\n", bs);
    printf("Dearness Allowance = %f\n", da);
    printf("House Rent Allowance = %f\n", hra);
    printf("Gross Salary of Ramesh = %f\n", grsal);
    return 0;
}