#include <stdio.h>
#include <stdlib.h>

void main()
{
    int age;
    float hat_size;
    float iq;
    char input[4];

    printf("Enter your age: ");
    gets(input);
    age = atoi(input);

    printf("Enter your hat size: ");
    gets(input);
    hat_size = atof(input);

    /* The atof function is used to convert strings to floating point values */

    iq = age * hat_size;
    printf("You have an iq of %.2f.\n", iq);
}