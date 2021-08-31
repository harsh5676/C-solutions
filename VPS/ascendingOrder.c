#include <stdio.h>
#include <conio.h>

int main()
{
    int x[10], i, j, n,t;
    printf("Enter the amount of numbers to be arranged in ascending order.\n");
    scanf("%d",&n);
    printf("Enter the numbers.\n");

    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &x[n]);
    }

    for (i = 0; i <= n - 1; i++)
    {
        printf("%d", x[n]);
    }

    for (i = 0; i <= n - 1; i++)
    {
        for (j = 0; j <= n - 1 - i; j++)
        {
            if (x[j] > x[j + 1])
            {
                t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
        }
    }
    
    printf("%d", x[n]);

    return 0;
}
