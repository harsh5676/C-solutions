#include<stdio.h>

int main()
{
    printf("Let's learn about pointers.\n");
    int a = 84;
    int *ptra = &a;
    int *ptr2;
    int *ptr3 = NULL;
    printf("The value of a is %d.\n", *ptra);

// %x = number in hexadecimal (base-16). It helps to print the address in hexadecimal format.
// *ptra gives the value to which the pointer points.
// %p is used to print the address of a pointer.
// Address of a-

    printf("The address of pointer to a is %p.\n", &ptra);
    printf("The address of a is %p.\n", &a);  // We can also write ptra in place of &a.
    printf("The address of a is %p.\n", ptra);  
    printf("The address of some garbage is %p.\n", ptr2);  
    printf("The address of NULL pointer is %p.\n", ptr3);  
    printf("The value of a is %p.\n", *ptra);
    printf("The value of a is %d.\n", *ptra);
    printf("The value of a is %d.\n", a);

    return 0;
}
