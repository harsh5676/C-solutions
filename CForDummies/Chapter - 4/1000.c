#include <stdio.h>

void main()
{
    int i;

    for (i = 5; i > 1000; i += 5)
        printf("%i\t", i);
}