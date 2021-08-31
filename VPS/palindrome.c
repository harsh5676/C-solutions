#include <stdio.h>

int main()
{
    int r, i, n, sum = 0, temp;

    cont:

    printf("Enter number to check if it is a palindrome number or not.\n");
    scanf("%d", &n);
    temp = n;

    while (n > 0)
    {
        if (n > 10)
        {
            r = n % 10;  
        }
        else
        {
            r = n;
        }

        sum = sum * 10 + r; 
        n = n / 10;
    }

    n = temp;

    if (n == sum)
    {
        printf("\nPalindrome.");
    }
    else
    {
        printf("\nThis is not a Palindrome.");
    }

    printf("\nTo continue press 1. To exit press 0.\n");
    scanf("%d", &i);

    if (i == 0)
    {
        goto end;
    }
    else if (i == 1)
    {
        goto cont;
    }
    
    end:

    return 0;
   
}