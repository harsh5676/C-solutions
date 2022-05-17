#include <stdio.h>

void main()
{
    int i;

    for (i = 1; i < 100; i = i + 1)
    {
        printf("Ouch!\t");
        printf("%i\n", i);
    }
}