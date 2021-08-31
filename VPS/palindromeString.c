#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];
    int i, j;
    printf("Enter Strings:\n");
    gets(s);
    j = strlen(s);

    for (i = 0; i < j / 2; i++)
    {
        if (s[i] != s[j - 1 - i])
        {
            printf("\nThis is Not Palindrome\n");
            break;
        }
    }
    
    if (i == j / 2)
    {
        printf("\nThis is Palindrome.\n");
    } 

    return 0;
}