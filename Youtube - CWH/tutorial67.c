#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    // EXAMPLE 1
    // FILE *ptr = NULL;
    // ptr = fopen("myfile2.txt", "r");

    // char c = fgetc(ptr);
    // printf("The character I read was %c.\n", c);
    // c = fgetc(ptr);
    // printf("The character I read was %c.\n", c);

    // EXAMPLE 2
    // FILE *ptr = NULL;
    // ptr = fopen("myfile2.txt", "r");

    // char str[35];
    // fgets(str, 5, ptr);
    // printf("The string is %s.\n", str);

    // EXAMPLE 3
    // FILE *ptr = NULL;
    // ptr = fopen("myfile2.txt", "w");

    // fputc('o', ptr);
    // fputs("This is Harsh.", ptr);

    // EXAMPLE 4
    // FILE *ptr = NULL;
    // ptr = fopen("myfile2.txt", "r+");

    // fputc('o', ptr);
    // fputs("This is Harsh.", ptr);

    // EXAMPLE 5
    // FILE *ptr = NULL;
    // ptr = fopen("myfile2.txt", "w+");

    // fputc('o', ptr);
    // fputs("This is Harsh.", ptr);

    // EXAMPLE 6
    // FILE *ptr = NULL;
    // ptr = fopen("myfile2.txt", "a+");

    // fputc('o', ptr);
    // fputs("This is Harsh.", ptr);

    // EXAMPLE 7
    // FILE *ptr = NULL;
    // ptr = fopen("myfile2.txt", "a+");

    // char str[35];
    // fgets(str, 5, ptr);
    // printf("The string is %s.\n", str);

    // EXAMPLE 8
    FILE *ptr = NULL;
    ptr = fopen("myfile2.txt", "r+");

    char str[35];
    fgets(str, 5, ptr);
    printf("The string is %s.\n", str);

    fclose(ptr);
    getch();
    return 0;
}