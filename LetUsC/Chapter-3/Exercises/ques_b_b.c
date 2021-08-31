#include <stdio.h>

int main()
{
    int j = 10, k = 12;
    if(k >= j)
    {
        {
            k = j;
            j = k;
        }
    }
    return 0;
}