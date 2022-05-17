#include <stdio.h>

float bonus(char x);

void main()
{
    char name[20];
    char level;
    float b;

    printf("Enter employee name: ");
    gets(name);
    printf("Enter bonus level (0, 1 or 2): ");
    level = getchar();
    b = bonus(level);
    b *= 100;
    printf("The bonus for %s will be $%.2f.\n", name, b);
}

/* Calculate the bonus */

float bonus(char x)
{
    if (x == '0') //  Bottom - level bonus
        return (0.33);
    if (x == '1') // Second - level bonus
        return (1.50);
    return (3.10); // Best bonus
}