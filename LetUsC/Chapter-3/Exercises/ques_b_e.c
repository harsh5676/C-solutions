#include <stdio.h>

int main()
{
    int x = 10, y = 15;
    if(x % 2 == y % 3)       // if(x % 2 = y % 3)  // Error use == for comparison not =.
        printf("Carpathians\n");
    return 0;
}