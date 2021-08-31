#include<stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    // char str[] = {'h', 'a', 'r', 's', 'h', 'i', 't', '\0'}; // OR, char str[] = "harshit"
    // printStr(str);

    char str[35];
    gets(str);
    printf("Using custom function printStr\n");
    printStr(str);
    printf("Using printf %s\n", str);
    printf("Using puts :\n");
    puts(str);
    return 0;
}