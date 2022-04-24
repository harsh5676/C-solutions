#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for seeding randomizer

int rnd(int range);
void seedrnd(void);

void main()
{
    int x;
    seedrnd();
    // display 100 random numbers
    for (x = 0; x < 100; x++)
    {
        printf("%i\t", rnd(10));
    }
}

int rnd(int range)
{
    int r;

    r = rand() % range; // spit up random number.
    return (r);
}

void seedrnd(void)
{
    srand((unsigned)time(NULL));
}