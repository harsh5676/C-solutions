#include <stdio.h>

int main()
{
    int a[10];
    int i, j, t, n;
    printf("Enter the amount of numbers you want to arrange.\n");
    scanf("%d", &n);

    printf("Enter the numbers.\n");

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        for ( j = i + 1; j < n; j++)
        {
            if (a[i < a[j]])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
            
        }
        
    }

    printf("\nThe numbers arranged on descending order are - \n ");

    for ( i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    
    
    return 0;
}
