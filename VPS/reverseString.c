/* Program to print a reverse String */

#include <stdio.h>
#include <conio.h>

void strrev();

void main()
{
    printf("Input Sentence:\n");
    strrev();
}


void strrev()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        reverse(c);
        printf("%c", c);
    }
    

}
