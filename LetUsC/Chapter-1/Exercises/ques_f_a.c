/* Ccnversion of Farenheit degrees into Centigrade degrees*/

#include <stdio.h>

int main()
{
    int a;
    float fah, cen;

    cont:

    printf("\nEnter the temperature ( in Fahrenheit Degrees ) -\n");
    scanf("%f", &fah);
    cen = ((fah - 32) * 5) / 9;
    printf("\nIn Centigrade degrees - %.2f\n", cen);

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