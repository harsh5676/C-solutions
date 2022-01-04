#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int a = 545;
    int *ptr; // This is a wild pointer
    //*ptr = 43; // This is not a good thing to do
    ptr = &a; // ptr is no longer a wild pointer
    printf("The value of a is %d.\n", *ptr);
    getch();
    return 0;
}