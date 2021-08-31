#include <stdio.h>

int main()
{
    int x, y, r, n, j, i, k = 0;
    
    // Inputting Number

    printf("\nProgram for Diamond Pattern:\n");
    printf("\nEnter Row Number for Creating Diamond Pattern:\n");
    scanf("%d", &r);
    printf("\nYour Pattern:\n");

    n = (r + 1) / 2;

    for (i = 1; i <= r; i++)
    {
        if (r % 2 == 0)
        {
            if(i <= n) k++;
            if(i > n + 1) k--;
        }
        else
        {
            i <= n ? k++: k--;
        }

        for (j = 1; j <= r; j++)
        {
            if (j >= n + 1 - k && j <= n - 1 + k)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }

        printf("\n");
        
    }
    
    return 0;
}