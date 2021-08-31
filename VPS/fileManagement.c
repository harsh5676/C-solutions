#include <stdio.h>

int main()
{
    FILE *f1;
    char c;
    printf("Data Input\n\n");
    
    /* Open the file INPUT */
    f1 = fopen("INPUT.txt", "w");

    /* Get a character from keyboard */
    while ((c = getchar()) != EOF)
    
        /* Write a character to Input */
        putc(c, f1);
    

    /* Close the Input file */
    fclose(f1);

    printf("\nData Output\n\n");

    /* Reopen the file Input */
    f1 = fopen("INPUT.txt", "r");

    /* Read a character from INPUT */
    while ((c = getc(f1)) != EOF)
    
        /* Display a character on screen */
        printf("%c", c);
    
    
    /* Close the file INPUT */

    fclose(f1);

    return 0;
}