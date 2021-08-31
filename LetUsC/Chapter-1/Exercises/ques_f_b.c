/* For Area and perimeter of a Rectangle and a Circle */

#include <stdio.h>
#include <math.h>

int main()
{

    int a, l, b, pr, ar;
    float c, r, pc, ac;

    // For Rectangle -

    cont:

    printf("\nTo calculate Area and Perimeter of a Rectangle -\n");
    printf("Enter its Length -\n");
    scanf("%d", &l);
    printf("Enter its Breadth -\n");
    scanf("%d", &b);
    pr = 2 * (l + b);
    ar = l * b;
    printf("\nIts Perimeter -%d\n", pr);
    printf("Its Area - %d\n", ar);

    // For Circle -

    printf("\nTo calculate Area and Perimeter of a Circle -\n");
    printf("Enter its Radius -\n");
    scanf("%f", &r);
    c = 3.14;
    pc = 2 * c * r;
    ac = pow(r, 2) * c;     // OR, ac = c * r * r;
    printf("\nIts Perimeter -%.2f\n", pc);
    printf("Its Area - %.2f\n", ac);

    printf("\nTo exit the program press 0 \nTo continue press 1 -\n");
    scanf("%d", &a);

    switch (a)
    {
    case 0:
        goto end;

    case 1:
        goto cont;
    
    default:
        printf("\nInvalid Operation.");
        break;
    }

    end:

    return 0;

}                        