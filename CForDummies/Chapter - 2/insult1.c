#include <stdio.h>

void main()
{
    char jerk[20];

    printf("Name some jerk you know: ");
    gets(jerk); // We can pronounce gets as get string but it probably stands for get stdin which means get from standard input.
    printf("Yeah, I think %s is a jerk, too.\n", jerk);
}