#include <stdio.h>

struct earning
{
    float ta, da, hra, pf, net_sal, b_sal;
};


int main()
{
    struct earning em1;
    printf("Enter the Basic Salary of the Employee -\n");
    scanf("%f", &em1.b_sal);

    em1.ta = 0.02 * em1.b_sal;
    em1.da = 0.05 * em1.b_sal;
    em1.hra = 0.19 * em1.b_sal;
    em1.pf = 0.12 * em1.b_sal;
    em1.net_sal = em1.b_sal + em1.ta + em1.da + em1.hra - em1.pf;

    printf("The Total Allowance of Employee is %.2f.\n", em1.ta);
    printf("The Dearness Allowance of Employee is %.2f.\n", em1.da);
    printf("The House Rent Allowance of Employee is %.2f.\n", em1.hra);
    printf("The Provident Fund of Employee is %.2f.\n", em1.pf);
    printf("The Net Salary of Employee is %.2f.\n", em1.net_sal);
    
    return 0;
}