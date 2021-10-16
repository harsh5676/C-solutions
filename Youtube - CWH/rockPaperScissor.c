// Create Rock, Paper & Scissors Game
//  Player 1: rock
//  Player 2 (computer): scissors --> player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int choice, random, x = 0, u_score = 0, c_score = 0;
    char name[30];
    printf("---------------------------Rock, Paper & Scissors Game---------------------------\n");
    printf("There will be three sets in one round.\n");
    printf("\nEnter your Name:\n");
    scanf("%s", &name);
    printf("\nPress 0 for Rock.\n");
    printf("Press 1 for Paper.\n");
    printf("Press 2 for Scissor.\n");
    for (x = 0; x < 3; x++)
    {
        printf("\nYour Turn:\n");
        printf("Enter your choice -\n");
        scanf("%d", &choice);
        getchar();
        srand(time(NULL));
        random = rand() % 3;

        // For User
        if (choice == 0)
            printf("You chose Rock.\n");
        else if (choice == 1)
            printf("You chose Paper.\n");
        else if (choice == 2)
            printf("You chose Scissor.\n");
        else if (choice < 0 && choice > 2)
            printf("Invalid Choice!\n");

        // For Computer
        printf("\nComputer's Turn:\n");
        if (random == 0)
            printf("Computer chose Rock.\n");
        else if (random == 1)
            printf("Computer chose Paper.\n");
        else if (random == 2)
            printf("Computer chose Scissor.\n");

        // Comparing
        if (choice == 0 && random == 0 || choice == 1 && random == 1 || choice == 2 && random == 2)
        {
            printf("\nTie!\n");
        }
        else if (choice == 0 && random == 1 || choice == 1 && random == 2 || choice == 2 && random == 0)
        {
            printf("\nComputer Wins!!\n");
            c_score++;
        }
        else if (choice == 0 && random == 2 || choice == 1 && random == 0 || choice == 2 && random == 1)
        {
            printf("\n%s Wins!!\n", name);
            u_score++;
        }
        else
        {
            printf("\nComputer Wins!!\n");
            c_score++;
        }

        getch();
    }
    printf("\nTotal Scores -\n");
    printf("%s - %d\n", name, u_score);
    printf("Computer - %d\n", c_score);

    if (c_score > u_score)
    {
        printf("\nComputer Wins the Round.\n");
    }
    else if (u_score > c_score)
    {
        printf("\n%s Wins the Round.\n", name);
    }
    else if (u_score == c_score)
    {
        printf("\nTie between %s and Computer.\n", name);
    }
    getch();
    return 0;
}
