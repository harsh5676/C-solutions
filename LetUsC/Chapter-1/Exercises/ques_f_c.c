/* To calculate and print paper sizes A0, A1, A2, A3, A4, A5, A6, A7, A8 */

#include <stdio.h>

int main()
{
    int a0l, a0b, a1l, a1b, a2l, a2b, a3l, a3b, a4l, a4b, a5l, a5b, a6l, a6b, a7l, a7b, a8l, a8b;

    a0l = 1189;
    a0b = 841;
    printf("Dimensions of A0 is %d mm X %d mm.\n", a0l, a0b);

    a1l = a0b;
    a1b = a0l/2;
    printf("Dimensions of A1 is %d mm X %d mm.\n", a1l, a1b);

    a2l = a1b;
    a2b = a1l/2;
    printf("Dimensions of A2 is %d mm X %d mm.\n", a2l, a2b);

    a3l = a2b;
    a3b = a2l/2;
    printf("Dimensions of A3 is %d mm X %d mm.\n", a3l, a3b);

    a4l = a3b;
    a4b = a3l/2;
    printf("Dimensions of A4 is %d mm X %d mm.\n", a4l, a4b);

    a5l = a4b;
    a5b = a4l/2;
    printf("Dimensions of A5 is %d mm X %d mm.\n", a5l, a5b);

    a6l = a5b;
    a6b = a5l/2;
    printf("Dimensions of A6 is %d mm X %d mm.\n", a6l, a6b);

    a7l = a6b;
    a7b = a6l/2;
    printf("Dimensions of A7 is %d mm X %d mm.\n", a7l, a7b);

    a8l = a7b;
    a8b = a7l/2;
    printf("Dimensions of A8 is %d mm X %d mm.\n", a8l, a8b);
    
    return 0;
}
