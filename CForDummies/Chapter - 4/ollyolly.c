#include <stdio.h>

void main()
{
    int count;

    for (count = 10; count > 0; count = count - 1)
        printf("%i\n", count);

    printf("Ready or not, here I come!\n");
}