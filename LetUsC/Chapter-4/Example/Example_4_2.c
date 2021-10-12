/*
A company insures its drivers in the following cases:

- If the driver is married.
- If the driver is unmarried, male & above 30 years of age.
- If the driver is unmarried, female & above 25 years of age.

In all other cases driver is not insured. If the martial status, sex and age of the driver are the inputs, write a program to determine whether the drive should be insured or not.
*/

#include <stdio.h>

int main()
{
    char sex, ms;
    int age;
    printf("Enter age, sex, martial status -\n");
    scanf("%d %c %c", &age, &sex, &ms);
    if ((ms == 'M') || (ms == 'U' && sex == 'M' && age > 30) || (ms == 'U' && sex == 'F' && age > 25))

        printf("Driver should be insured\n");
    
    else
    
        printf("Driver should not be insured\n");
    
    
    return 0;
}