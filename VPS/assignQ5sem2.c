#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    char ch;
    char st[50];
    /* Pointer for both binary files */
    FILE *fpbr, *fpbw;
    /* Open for a2.c file in r mode */
    fpbr = fopen("a2.c", "r");
    /* Test logic for successful open */
    if (fpbr == NULL)
    {
        puts("Input Binary file is having issues while opening.\n");
    }
    /* Opening file a2out.c in "w" mode for writing */
    fpbw = fopen("a2out.c", "w");

    /* Ensure a2out.c opened successfully */
    if (fpbw == NULL)
    {
        puts("Output Binary file is having issues while opening.\n");
    }
    /* Read and write logic for binary files */
    while (1)
    {
        ch = fgetc(fpbr);
        if (ch == EOF)
            break;
        else
            fputc(ch, fpbw);
    }
    /* Closing both binary files */
    fclose(fpbr);
    fclose(fpbw);

    getch();
    return 0;
}