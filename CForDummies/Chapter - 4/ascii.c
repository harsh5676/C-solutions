#include <stdio.h>

void main()
{
    unsigned char a;

    for (a = 0; a < 128; a = a + 1)
    {
        printf("%3i = '%c'\n", a, a);
    }
}