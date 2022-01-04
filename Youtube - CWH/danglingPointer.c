#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int *functionDangling()
{
    int a, b, sum;
    a = 57;
    b = 452;
    sum = a + b;
    return &sum;
}

int main()
{
    // Case 1 - De allocation of memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 40;
    ptr[1] = 45;
    ptr[2] = 36;
    ptr[3] = 78;
    free(ptr); // ptr is now a dangling pointer.

    // Case 2 - Function returning local variable address
    int *dangPtr = functionDangling(); // dangPtr is now a dangling pointer.

    int *danglingPtr3;
    // Case 3 - If a variable goes out of scope
    {
        int a = 43;
        danglingPtr3 = &a;
    }
    // Here variable a goes out of scope which means danglingPtr3 is pointing to a location which is freed and hence danglingPtr3 is now a dangling pointer.

    getch();
    return 0;
}