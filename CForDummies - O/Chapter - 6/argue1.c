#include <stdio.h>

void main(int argc, char *argv[])
{
    if (argc > 1)
    {
        printf("ERROR! This program is not designed\n");
        printf("to have anything typed after it's name!\n");
    }
    else
        printf("Pleased to be of service!\n");
}
