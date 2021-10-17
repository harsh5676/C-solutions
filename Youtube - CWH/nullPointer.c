#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 34;
    int *ptr = &a;
    // int *ptr = NULL;
    // int *ptr = NULL;
    if (ptr != NULL)
        printf("The address of a is %d\n", *ptr);
    else
        printf("The pointer is a NULL pointer and cannot be dereferenced.\n");
    getch();
    return 0;
}