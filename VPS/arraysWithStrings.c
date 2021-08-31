#include <stdio.h>
#include <conio.h>

struct student
{
    char name;
    int m, p, c, total;
    float percentage;
};

int main()
{
    int i, t, n, e;
    struct student x[500];

    cont:

    printf("Enter the number of Entries -\n");
    scanf("%d", &n);
    for ( i = 0; i <= n - 1; i++) 
    {
        if (i == 0)
        {
            printf("\nEnter the details of %dst student -\n", i + 1);
        }
        else if (i == 1)
        {
            printf("\nEnter the details of %dnd student -\n", i + 1);
        }
        else if (i == 2)
        {
            printf("\nEnter the details of %drd student -\n", i + 1);
        }
        else
        {
            printf("\nEnter the details of %dth student -\n", i + 1);
        }

        printf("Name -\n");
        scanf("%s", x[i].name);

        printf("Mathematics -\n");
        scanf("%d", &x[i].m);

        printf("Physics -\n");
        scanf("%d", &x[i].p);

        printf("Chemistry -\n");
        scanf("%d", &x[i].c);

    }
    
    // For Printing
    
    for ( i = 0; i <= n - 1; i++) 
    {
        if (i == 0)
        {
            printf("\nDetails of %dst student -\n", i + 1);
        }
        else if (i == 1)
        {
            printf("\nDetails of %dnd student -\n", i + 1);
        }
        else if (i == 2)
        {
            printf("\nDetails of %drd student -\n", i + 1);
        }
        else
        {
            printf("\nDetails of %dth student -\n", i + 1);
        }

        printf("Name - %s\n", x[i].name);       

        printf("Mathematics - %d\n", x[i].m);

        printf("Physics - %d\n", x[i].p);

        printf("Chemistry - %d\n", x[i].c);

        x[i].total = x[i].m + x[i].p + x[i].c;
        printf("Total - %d\n", x[i].total);

        x[i].percentage = x[i].total / 3;
        printf("Percentage - %f\n", x[i].percentage);

    }

    printf("Do you want to close the program?\n To exit press 0 to continue press 1");
    scanf("%d", &e);

    switch (e)
    {
    case 0:
        goto end;
    
    case 1:
        goto cont;

    default:
        printf("Invalid Operation.");
        break;
    }

    end:
    
    return 0;

}
