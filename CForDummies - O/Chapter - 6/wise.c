/*
WISE.C - a series of programs to test logical comparisons: && = AND, || = OR
*/

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

#define WISE 1        // Wise is TRUE
#define SILLY !(WISE) // Silly is FALSE

void main()
{
    char c;
    int Poindexter, Melvin;

    printf("Who is wise, poindexter or Melvin?\n");
    printf("Type P or M:");
    c = toupper(getch());     // get input
    if (c == 'p' || c == 'P') // they typed P
    {
        printf("P\n");     // display their input
        Poindexter = WISE; // Make 'em wise or
        Melvin = SILLY;    // silly
    }
    else
    {
        printf("M\n"); // display input
        Poindexter = SILLY;
        Melvin = WISE;
    }

    // These comparisons display the results

    if (Poindexter == WISE && Melvin == SILLY)
        printf("Poindexter is wise and Melvin is silly.\n");
    if (Poindexter == SILLY || Melvin == SILLY)
        printf("Either Poindexter or Melvin is silly.\n");
    if (Poindexter == WISE || Melvin == WISE)
        printf("Either Poindexter or Melvin is wise.\n");
    if (Poindexter == SILLY && Melvin == WISE)
        printf("Poindexter is silly and Melvin is wise.\n");
    if (Poindexter == SILLY || Melvin == WISE)
        printf("Either Poindexter is silly or Melvin is wise.\n");
}
