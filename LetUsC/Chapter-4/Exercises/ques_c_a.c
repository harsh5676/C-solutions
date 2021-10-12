#include <stdio.h>
#include <conio.h>

int main()
{
    char spy = 'a', password = 'z';
    if(spy == 'a' || password == 'z')                   //  if(spy == 'a' or password == 'z')   wrong 
        printf("All the birds are safe in the nest\n");
    getch();
    return 0;
}