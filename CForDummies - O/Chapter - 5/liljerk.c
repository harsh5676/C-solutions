#include <stdio.h>

void jerk(char *name);

void main()
{
    char whoever[20];

    printf("Name some jerk you know:\n");
    gets(whoever);
    jerk(whoever);
}

void jerk(char *name)
{
    int i;

    for (i = 0; i < 3; i++)
        printf("%s is a jerk\n", name);
}