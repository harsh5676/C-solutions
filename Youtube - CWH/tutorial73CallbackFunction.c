#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

void greetHelloAndExecute(int (*fptr)(int, int))
{
    printf("Hello User.\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}

void greetGmAndExecute(int (*fptr)(int, int))
{
    printf("Good Morning User.\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}

int main()
{
    system("cls");
    int (*ptr)(int, int);
    ptr = &sum;
    greetHelloAndExecute(ptr);
    getch();
    return 0;
}