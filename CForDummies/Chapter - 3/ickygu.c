#include <stdio.h>

void main()
{
    char menuitem[] = "Slimey Orange Stuff \"Icky Woka Gu\"";
    int pints = 1;
    float price = 1.45;

    printf("Today special - %s\n", menuitem);
    printf("You want %i pint.\n", pints);
    printf("That be $%.2f, please.\n", price);
}