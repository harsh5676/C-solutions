/* Consider a currency system in which there are notes of seven denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If a sum of Rs. N is entered through the keyboard, write a program to compute the smallest number of notes that will combine to give Rs. N. */

#include <stdio.h>

int main()
{
    int amount, nohun, nofifty, noten, nofive, notwo, noone, total;
    printf("Enter the amount - \n");
    scanf("%d", &amount);   // 505
    
    nohun = amount / 100;   // 505/100=5
    amount = amount % 100;  // 505%100=5

    nofifty = amount / 50;  // 5/50=0
    amount = amount % 50;   // 5%50=5

    noten = amount / 10;    // 5/10=0
    amount = amount % 10;   // 5%10=5

    nofive = amount / 5;    // 5/5=1
    amount = amount % 5;    // 5%5=0

    notwo = amount / 2;     // 0/2=0           
    amount = amount % 2;    // 0%2=0

    noone = amount / 1;     // 0/1=0
    amount = amount % 1;    // 0%1=0

    total = nohun + nofifty + noten + nofive + notwo + noone;
    printf("Smallest number of notes = %d\n", total);

    return 0;
}