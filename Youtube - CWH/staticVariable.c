#include <stdio.h>
#include <conio.h>

int b = 34; // This is a global variable since it is declared outside the main function.

int ret()
{
    return 43 * 3;
}

int func1(int b1)
{
    static int myvar = 98; // If nothing is intialised the value of myvar will be 0.
    // static int myvar = ret(); // Static variable stores the value of the constant.
    printf("The value of myvar is %d.\n", myvar);
    myvar++;
    // printf("The value of b inside func1() is %d.\n", b);
    // printf("The address of b inside func1() is %d\n", &b);
    return b1 + myvar;
}

int main()
{
    int b = 344; // This is a local variable as it is declared inside a function.
    // printf("The address of b inside func1() is %d\n", &b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("The value of func1() is %d\n", val);
    getch();
    return 0;
}