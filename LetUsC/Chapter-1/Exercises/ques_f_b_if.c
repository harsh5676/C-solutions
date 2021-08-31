/* For Area and perimeter of a Rectangle and a Circle Using if else statement */

#include <stdio.h>
#include <math.h>

int main()
{
    int s, a, l, b, pr, ar;
    float c, r, pc, ac;

    cont:

    printf("To find out Perimeter and Area of a Rectangle Press 0 \nfor Circle Press 1\n");
    scanf("%d", &s);

    if (s == 0)
    {

    printf("\nTo calculate Area and Perimeter of a Rectangle -\n");
    printf("Enter its Length -\n");
    scanf("%d", &l);
    printf("Enter its Breadth -\n");
    scanf("%d", &b);
    pr = 2 * (l + b);
    ar = l * b;
    printf("\nIts Perimeter -%d\n", pr);
    printf("Its Area - %d\n", ar);

    }

    else if (s == 1)
    {

    printf("\nTo calculate Area and Perimeter of a Circle -\n");
    printf("Enter its Radius -\n");
    scanf("%f", &r);
    c = 3.14;
    pc = 2 * c * r;
    ac = pow(r, 2) * c;     // OR, ac = c * r * r;
    printf("\nIts Perimeter -%.2f\n", pc);
    printf("Its Area - %.2f\n", ac);
    
    }

    else
    {

        printf("Invalid Operation");

    }
        
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