#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int reverse()
{
    int n = 0, rev = 0, rem = 0;
    printf("Enter an integer:\n");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("Reversed Number = %d\n", rev);
    return 0;
}

void largest()
{
    float a, b;
    printf("Enter two numbers to find out the largest of the two -\n");
    scanf("%f%f", &a, &b);
    // Calculation
    if (a > b)
        printf("The largest number = %f\n", a);
    else
        printf("The largest number = %f\n", b);
}

int integer()
{
    int num = 0, r1, r2;
    printf("Enter a number -\n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        r1 = num / 2;
        printf("Result = %d\n", r1);
    }
    else
    {
        r2 = num * 3;
        printf("Result = %d\n", r2);
    }
    return 0;
}

int three()
{
    int n1, n2, n3;
    printf("Enter three numbers -\n");
    scanf("%d%d%d", &n1, &n2, &n3);
    if (n1 == n2 || n2 == n3 || n3 == n1)
        printf("Numbers are equal.\n");
    else
        printf("Numbers are not equal.\n");
    return 0;
}

int main()
{
    system("cls");
    int in;
    printf("Press 1 to reverse the given 5-digit integer\n");
    printf("Press 2 find out the largest of the two numbers\n");
    printf("Press 3 to input an integer\n");
    printf("Press 4 to find out if any of the numbers entered by the user are equal\n");
    scanf("%d", &in);
    switch (in)
    {
    case 1:
        reverse();
        break;

    case 2:
        largest();
        break;

    case 3:
        integer();
        break;

    case 4:
        three();
        break;

    default:
        printf("Invalid Input\n");
        break;
    }
    getch();
    return 0;
}