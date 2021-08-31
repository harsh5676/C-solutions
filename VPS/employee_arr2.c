/* 
Program to calculate PF, HRA, DA, TA & NET SALARY based on Basic Salary given by user by using struct keyword where -
*/

#include <stdio.h>

struct salary {
    float n_sal, b_sal, ta, da, pf, hra;
};

int main()
{
    int i;
    float  t, d, h, p;
    struct salary em[5];

    /* Inputting Values */

    for ( i = 0; i <= 4; i++)
    {
        printf("\nEnter the Basic Salary of Employee %d -\n", i + 1);
        scanf("%f", &em[i].b_sal);
        printf("Enter the Total Allowance (in %%) -\n");
        scanf("%f", &t);
        printf("Enter the Dearness Allowance (in %%) -\n");
        scanf("%f", &d);
        printf("Enter the House Rent Allowance (in %%) -\n");
        scanf("%f", &h);
        printf("Enter the Provident Fund (in %%) -\n");
        scanf("%f", &p);
        
        /* Calculation */

        em[i].ta = (t / 100) * em[i].b_sal;
        em[i].da = (d / 100) * em[i].b_sal;
        em[i].hra = (h / 100) * em[i].b_sal;
        em[i].pf = (p / 100) * em[i].b_sal;
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