#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    char let;
    char name[20];

    printf("Type in a number, a letter and your name: ");
    scanf("%i %c %s", &num, &let, &name);

    printf("%s typed in %i and %c.\n", name, num, let);
    printf("This information will be used by the\n");
    printf("government to force you into personally\n");
    printf("paying off the national debt.\n");
    printf("Thank you,\nUncle Sam.");
}
