#include <stdio.h>

void main(int argc, char *argv[])
{
    int x;

    printf("argc = %i\n", argc);
    for (x = 0; x < argc; x++)
    {
        printf("argv[%i] = %s\n", x, argv[x]);
    }
}
