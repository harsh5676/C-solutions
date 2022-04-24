/*
WISE.C - a series of programs to test logical comparisons: && = AND, || = OR
*/

#include <stdio.h>
#include <conio.h>

#define WISE 1          // Wise is TRUE
#define SILLY !(WISE)   // Silly is FALSE

void main()
{
    char c;
    int Poindexter, Melvin;

    printf("Who is wise, poindexter or Melvin?\n");
    printf("Type P or M:");
    c=getch();  // get input
    if (c=='p') // they typed P
    {
        printf("P\n");  // display their input 
        Poindexter = WISE; // Make 'em wise or
        Melvin = SILLY; // silly
    }
    else
    {
        printf("M\n");  // display input
        Poindexter=SILLY;
        Melvin = WISE;
    }

    // These comparisons display the results

    if (Poindexter==WISE) 
        printf("Poindexter is wise.\n");
    if(Melvin==SILLY)
        printf("Melvin is silly.\n");
    if(Poindexter==SILLY)
        printf("Poindexter is silly.\n");
    printf("Melvin is wise.\n");
    
}


