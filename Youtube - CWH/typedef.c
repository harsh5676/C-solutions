#include<stdio.h>

typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name[55];
} std;

int main()
{
      
    // typedef <previous_name> <alias_name>

    /* Example - 1

    typedef unsigned long ul;
    typedef int integer;
    ul l1, l2, l3;
    integer a = 4;
    printf("The value of a is %d.", a);

    */

    /* Example - 2

    typedef int dollar;
    dollar money = 2;
    printf("$%d", money);

    */

    // Example - 3

    std s1, s2;  // OR, struct student s1, s2;
    s1.id = 56;
    s2.id = 87;
    printf("The value of s1's ID is %d.\n", s1.id);
    printf("The value of s2's ID is %d.\n", s2.id);

    /* Example - 4

    //int* a, b;  // Only a is defined as the pointer. b is declared as integer value.
    typedef int* intPointer;
    intPointer a, b;
    int c = 90;
    a = &c;
    b = &c;

    */

    return 0;

}