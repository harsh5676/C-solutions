#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int sum()
{
    int number1, number2, sum = 0;
    printf("Enter two integers:\n");
    // Taking Input
    scanf("%d%d", &number1, &number2);
    // Calculating Sum
    sum = number1 + number2;
    // Printing Output
    printf("%d + %d = %d\n", number1, number2, sum);
    return 0;
}

int division()
{
    int dividend, divisor, quotient = 0, remainder = 0;
    // Taking Input
    printf("Enter Dividend:\n");
    scanf("%d", &dividend);
    printf("Enter Divisor:\n");
    scanf("%d", &divisor);
    // Compute Quotient
    quotient = dividend / divisor;
    // Compute Remainder
    remainder = dividend % divisor;
    // Printing Output
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
    return 0;
}

int product()
{
    float a, b, product = 0;
    printf("Enter two numbers:\n");
    scanf("%f%f", &a, &b);
    // Calculating Product
    product = a * b;
    // Result up to 2 decimal point is displayed using %.2f
    printf("Product = %.2f\n", product);
    return 0;
}

void character()
{
    char str[30];
    printf("Enter any word -\n");
    scanf("%s", &str);
    printf("%s %s\n", str, str);
}

int main()
{
    system("cls");
    int in;
    printf("Press 1 for addtion, 2 for division, 3 for multiplication & 4 to print a word twice in the same row -\n");
    scanf("%d", &in);
    switch (in)
    {
    case 1:
        sum();
        break;

    case 2:
        division();
        break;

    case 3:
        product();
        break;

    case 4:
        character();
        break;

    default:
        printf("Invalid Input\n");
        break;
    }
    getch();
    return 0;
}