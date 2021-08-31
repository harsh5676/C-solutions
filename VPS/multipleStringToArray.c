#include <stdio.h>

int main()
{
    char s[5][10];
    int i;
    printf("Enter five strings.\n");
    for (i = 0; i <= 4; i++)
    {
        gets(s[i]); // scanf()
    }

    for (i = 0; i <= 4; i++)
    {
        printf("\n%s", s[i]); // puts()
    }
        
    return 0;
}