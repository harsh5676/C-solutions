#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for seeding randomizer

int rnd(void);
void seedrnd(void);

void main()
{
    int x;
    seedrnd();
    // display 100 random numbers
    for (x = 0; x < 100; x++)
    {
        printf("%i\t", rnd());
    }
}

int rnd(void)
{
    int r;

    r = rand(); // spit up random number.
    return (r);
}

void seedrnd(void)
{
    srand((unsigned)time(NULL));
}