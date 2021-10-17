#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 356;
    float b = 9.5;
    void *ptr;
    ptr = &a;
    printf("The value of a is %d.\n", *((int *)ptr));
    ptr = &b;
    printf("The value of b is %f.\n", *((float *)ptr));
    getch();
    return 0;
}