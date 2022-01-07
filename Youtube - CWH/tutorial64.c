#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    FILE *ptr = NULL;
    char string[64] = "This content was produced by Tutorial64.c";

    // ****************Reading a file ****************
    // char string[34];
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The content of this file has: %s\n", string);

    // ****************Writing a file ****************
    // ptr = fopen("myfile.txt", "w");
    // fprintf(ptr, "%s", string);

    // ****************Appending a file ****************
    ptr = fopen("myfile.txt", "a");
    fprintf(ptr, "%s", string);

    getch();
    return 0;
}