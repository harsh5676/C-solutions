#include <stdio.h>
#include <conio.h>
#include <time.h>

#define RANGE 100 // Set guesssing range
#define TRIES 6   // give 'em tries to guess

int rnd(int range);
void seedrnd(void);

void main()
{
    int guessme, guess, t;

    seedrnd();                // seed the randomizer
    guessme = rnd(RANGE) + 1; // get the number to guess

    printf("GUESS!?!\nGuess the random number.\n");
    printf("I'm thinking of a number \between 1 and %i.\n", RANGE);
    printf("Can you guess it in %i tries?\n", TRIES);

    for (t = 1; t <= TRIES; t++) // give them TRIES attempts
    {
        printf("Guess #%i: ", t);
        scanf("%i", &guess); // get their guess

        if (guess == guessme) // they guess correctly
        {
            printf("You got it!\n");
            break; // stop here
        }
        else if (guess < guessme) // guess is too low
            printf("Too low!\n");
        else // guess is too high
            printf("Too high!\n");
    }
    printf("The answer was %i.\n", guessme);
}

/*
Random number generator function. Coughs up a random number in the range of zero to "range."
*/

int rnd(int range)
{
    int r;

    r = rand() % range; // spit up random number.
    return (r);
}

/*
Random number seeding program. This makes the number "more" random.
*/

void seedrnd(void)
{
    srand((unsigned)time(NULL));
}