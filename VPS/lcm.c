#include <stdio.h>

int lcm (int x, int y);

int main()
{
    int n1, n2, n3;
    printf("Enter two numbers.\n");
    scanf("%d%d", &n1, &n2);
    n3 = lcm(n1, n2);
    printf("\nLCM is %d.", n3);
    return 0;
}

int lcm (int x, int y)
{
    int z;
    for (z = 1; z <= x * y; z++)
    {
        if (z % x == 0 && z % y == 0)
        {
            break;
        } 

    }
    return z;    
}
