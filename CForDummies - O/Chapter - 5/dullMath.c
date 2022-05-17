#include <stdio.h>

void here(void);
void there(void);

void main()
{
    here();
    there();
}

void here()
{
    int v;
    v = 6 * 5;
    printf("The value of v here is %i\n", v);
}

void there()
{
    int v;

    // v += 5;
    printf("The value of v here is %i\n", v);
}