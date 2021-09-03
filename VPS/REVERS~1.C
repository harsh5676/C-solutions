/* Program to print a reverse String */
#include <stdio.h>
#include <conio.h>
#include <string.h>

void stringrev();

void main()
{
    char s[100];
    clrscr();
    printf("Input Sentence:\n");
    gets(s);
    stringrev(s);
}


void stringrev(char *c)
{
    clrscr();
    strrev(c);
    printf("%s", c);
    getch();

}
