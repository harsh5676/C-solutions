#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][10], s[10];
    int r, i, round;
    printf("Enter 5 name.\n");

    for (i = 0; i <= 4; i++)
    {
        gets(str[i]);
    }
    for (round = 0; round <= 4; round++)
    {
        for (i = 0; i < 4 - round; i++)
        {
            r = strcmp(str[i], str[i + 1]);
            if (r > 0)
            {
                strcpy(s, str[i]);
                strcpy(str[i], str[i + 1]);
                strcpy(str[i + 1], s);
            }
            
        }
        
    }

    printf("\nString in sorted form\n");

    for (i = 0; i <= 4; i++)
    {
        puts(str[i]);
    }
    
    
    return 0;
}