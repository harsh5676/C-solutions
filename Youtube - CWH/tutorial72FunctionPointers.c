#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

void greet()
{
    printf("Hello, user Good Morning.\n");
}

int main()
{
    system("cls");
    printf("The sum of 1 and 2 is %d.\n", sum(1, 2)); // Testing the function
    int (*fPtr)(int, int);                            // Declaring a Function Pointer
    fPtr = &sum;                                      // Creating a Function Pointer
    int d = (*fPtr)(4, 6);                            // Dereferencing a Function Pointer
    printf("The value of d is %d.\n", d);
    getch();
    return 0;
}