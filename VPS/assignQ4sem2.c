#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

long fget_long()
{
    long a;
    FILE *fp;
    fp = fopen("long.txt", "r");
    if (fp == NULL)
    {
        printf("File is empty.\n", "");
        exit(0);
    }
    fscanf(fp, "%d", &a);
    printf("Long Variable from file: %ld\n", a);
    fclose(fp);
    return 0;
}

short fget_short()
{
    short b;
    FILE *fp;
    fp = fopen("short.txt", "r");
    if (fp == NULL)
    {
        printf("File is empty.\n", ";");
        exit(0);
    }
    fscanf(fp, "%d", &b);
    printf("Short Variable from file: %d\n", b);
    fclose(fp);
    return 0;
}

float fget_float()
{
    float c;
    FILE *fp;
    fp = fopen("varfloat.txt", "r");
    if (fp == NULL)
    {
        printf("File is empty.\n", "r");
        exit(0);
    }
    fscanf(fp, "%f", &c);
    printf("Short Variable from file: %f\n", c);
    fclose(fp);
    return 0;
}

long fprt_long()
{
    FILE *fp;
    long a;
    fp = fopen("prtlong.txt", "w");
    if (fp == NULL)
    {
        printf("File doesn't exist\n");
        exit(0);
    }
    printf("Enter a long value to store in a file:\n");
    scanf("%ld", &a);
    fprintf(fp, "%ld", a);
    printf("The value written to the file: %ld\n", a);
    fclose(fp);
    return 0;
}

short fprt_short()
{
    FILE *fp;
    short b;
    fp = fopen("prtshort.txt", "w");
    if (fp == NULL)
    {
        printf("File doesn't exist\n");
        exit(0);
    }
    printf("Enter a short value to store in a file:\n");
    scanf("%d", &b);
    fprintf(fp, "%d", b);
    printf("The value written to the file: %d\n", b);
    fclose(fp);
    return 0;
}

float fprt_float()
{
    FILE *fp;
    short c;
    fp = fopen("prtfloat.txt", "w");
    if (fp == NULL)
    {
        printf("File doesn't exist\n");
        exit(0);
    }
    printf("Enter a short value to store in a file:\n");
    scanf("%f", &c);
    fprintf(fp, "%f", c);
    printf("The value written to the file: %f\n", c);
    fclose(fp);
    return 0;
}

int main()
{
    system("cls");
    fget_long();
    fget_short();
    fget_float();

    fprt_long();
    fprt_short();
    fprt_float();
    getch();
    return 0;
}