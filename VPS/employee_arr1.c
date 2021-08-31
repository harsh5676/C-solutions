/* 
Program to calculate PF, HRA, TA & NET SALARY based on Basic Salary given by user by using struct keyword where -
TA = 2 % of Basic Salary
DA = 5 % of Basic Salary
HRA = 19 % of Basic Salary
PF = 12 % of Basic Salary
*/

#include <stdio.h>

struct salary {
    float n_sal, b_sal, ta, da, pf, hra;
};

int main()
{
    int i;
    struct salary em[5];

    /* Inputting Values */

    for ( i = 0; i <= 4; i++)
    {
        printf("Enter the Basic Salary of Employee %d -\n", i + 1);
        scanf("%f", &em[i].b_sal);
        em[i].ta = 0.02 * em[i].b_sal;
        em[i].da = 0.05 * em[i].b_sal;
        em[i].hra = 0.19 * em[i].b_sal;
        em[i].pf = 0.12 * em[i].b_sal;
        em[i].n_sal = em[i].b_sal + em[i].ta + em[i].da + em[i].hra - em[i].pf;
    }

    /* Printing Values */

    for ( i = 0; i <= 4; i++)
    {
        printf("The Basic Salary of Employee %d is %.2f.\n", i + 1, em[i].b_sal);
        printf("The Total Allowance of Employee %d is %.2f.\n", i + 1, em[i].ta);
        printf("The Dearness Allowance of Employee %d is %.2f.\n", i + 1, em[i].da);
        printf("The House Rent Allowance of Employee %d is %.2f.\n", i + 1, em[i].hra);
        printf("The Provident Fund of Employee %d is %.2f.\n", i + 1, em[i].pf);
        printf("The Net Salary of Employee %d is %.2f.\n\n", i + 1, em[i].n_sal);
    }
    
    
    return 0;
}