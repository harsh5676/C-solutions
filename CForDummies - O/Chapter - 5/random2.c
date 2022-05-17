#include <stdio.h>
#include <stdlib.h>

int rnd(void);
void seedrnd(void);

void main()
{
    int x;
    seedrnd(); // prepare random-number gen
               // display 100 random numbers
    for (x = 0; x < 100; x++)
    {
        printf("%i\t", rnd());
    }
}

int rnd(void)
{
    int r;

    r = rand();
    return (r); // spit up random num
}

void seedrnd(void) // seed the random number
{
    int seed;
    char s[6];

    printf("Enter a random number seed: ");
    seed = (unsigned)atoi(gets(s));

    srand(seed);
}