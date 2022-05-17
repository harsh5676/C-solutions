#include <stdio.h>

void main()
{
    short s;
    long l;

    for (s = 0; s < 1000000; s += 1000)
        printf("%i\t", s);

    printf("\nPress Enter\n");
    getchar();

    for (l = 0; l < 1000000; l += 1000)
        printf("%li\t", l);
}