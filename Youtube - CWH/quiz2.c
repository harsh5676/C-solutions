// Given two numbers a and b, add them and then subtract them and assign them to a and b using call by reference.

// For Eg -

// a = 7
// b = 5

// After running the function -

// a = a + b (13)
// b = a - b (2)

#include<stdio.h>

int add(int *f, int *s)
{
    int sum;
    sum = *f + *s;
    return sum;
}

int subtract(int *o, int *t)
{
    int diff;
    diff = *o - *t;
    return diff;
}

int main()
{
    int a, b, c, d;
    printf("Enter two numbers you want to do opertion on - \n");
    scanf("%d%d", &a, &b);
    c = add(&a, &b);
    d = subtract(&a, &b);
    printf("The sum of the two given numbers is %d.\n", c);
    printf("The difference of the two given numbers is %d.\n", d);
    return 0;
}