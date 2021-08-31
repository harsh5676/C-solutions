/*
If ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.
*/

#include <stdio.h>

int main()
{
    int r, s, a;

    /* Taking Input */

    printf("Enter Ram's age - \n");
    scanf("%d", &r);

    printf("Enter Shyam's age - \n");
    scanf("%d", &s);

    printf("Enter Ajay's age - \n");
    scanf("%d", &a);

    /* Calculation and Printing Output */

    if (r < s)
    {
        if (r < a)
        {
            printf("Ram is the youngest of the three.\n");
        } 
        else
        {
            printf("Ajay is the youngest of the three.\n");
        }
        
    }

    else
    {
        if (s < a)
        {
            printf("Shyam is the youngest of the three.\n");
        }
        else
        {
            printf("Ajay is the youngest of the three.\n");
        }
        
    }
    

    /* OR */

    // if (r < s)
    // {
    //     if (r < a)
    //     {
    //         printf("Ram is the youngest of the three.\n");
    //     } 
    // }

    // if (s < r)
    // {
    //     if (s < a)
    //     {
    //         printf("Shyam is the youngest of the three.\n");
    //     }
        
    // }
    
    // if (a < r)
    // {
    //     if (a < s)
    //     {
    //         printf("Ajay is the youngest of the three.\n");
    //     }   
    // }
    
    

    return 0;
}