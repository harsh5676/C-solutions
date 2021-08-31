#include <stdio.h>

int hcf (int x, int y);

int main()
{
    int n1, n2, n3;
    printf("Enter two numbers.\n");
    scanf("%d%d", &n1, &n2);
    n3 = hcf(n1, n2);
    printf("\nHCF is %d.", n3);
    return 0;
}

int hcf (int x, int y)
{
    int z;
    for (z = x * y; z >= 1; z--)
    {
        if (x % z == 0 && y % z == 0)
        {
            break;
        } 
        
    }
    return z;
    
}
