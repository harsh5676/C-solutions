#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "abcd";
    char str2[] = "abCd";
    char str3[] = "abcd";
    int result;

    // Comparing strings str 2 and str 1

    result = strcmp(str2, str1);
    printf("strcmp(str1, str2) = %d\n", result);

    // Comparing strings str 1 and str 3

    result = strcmp(str1, str3);

    if (result == 0)
    {
        printf("strcmp(str1, str3) = %d\n", result);
        printf("Both strings are same.\n"); 
    }
    

    return 0;
}