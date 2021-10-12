/*
Dynamic Memory Allocation
    ABC Pvt Ltd. manages employee records of other companies.
    Employee Id can be of any length and it can contain any character
    For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
    Then, you have to take employee id as an input and display it on screen. 
    Store the employee id in a character array which is allocated dynamically.
    You have to create only one character array dynamically
EXAMPLE:
    Employee 1:
    Enter no of characters in your eId
    45
    Dynamically allocate the character array.
    take input from user 

    Employee 2:
    Enter no of characters in your eId
    4
    Dynamically allocate the character array.
    take input from user 

    Employee 3:
    Enter no of characters in your eId
    9
    Dynamically allocate the character array.
    take input from user 
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    // SOLUTION -
    // int chars, i = 0;
    // char *ptr;
    // while (i < 3)
    // {
    //     printf("Employee %d: Enter the number of characters in your Employee ID -\n", i + 1);
    //     scanf("%d", &chars);
    //     ptr = (char *)malloc((chars + 1) * sizeof(char));
    //     printf("Enter your Employee ID -\n");
    //     scanf("%s", ptr);
    //     printf("Your Employee ID - %s\n", ptr);
    //     free(ptr);
    //     i = i + 1;
    // }

    int chars, i = 0;
    char a, b;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d: Enter the number of characters in your Employee Id\n", i + 1);
        scanf("%d", &chars);
        getchar();
        printf("Enter the value of a\n");
        scanf("%c", &a);
        getchar();
        printf("Enter the value of b\n");
        scanf("%c", &b);
        ptr = (char *)malloc((chars + 1) * sizeof(char));
        printf("Enter your Employee Id\n");
        scanf("%s", ptr);
        printf("Your Employee Id is %s\n", ptr);
        free(ptr);
        i = i + 1;
    }
    getch();
    return 0;
}