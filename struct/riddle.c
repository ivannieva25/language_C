/*
Program the following game: A user enters a number between 1 and 10.
Another user has 3 attempts to find that number.
As a hint on the screen, each time a number is
is shown as a hint on the screen each time a number is entered, if it is higher or lower.
If it is correct, congratulate the player. 
communicate the failure. Give the option to play again.*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char continuePlaying;
    int amount, count, player1, player2;

    printf("Welcome\n");

    do {
        printf("Player 1\n");
        printf("Enter a number between 1 and 10\n");
        scanf("%d", &player1);
        system("cls");
        printf("Let the game begin\n");
        printf("You have three attempts to guess the number\n");
        printf("Player 2, enter the number: ");

        for (amount = 1; amount <= 3; amount++) {
            scanf("%d", &player2);
            if (player1 == player2) {
                printf("YOU GUESSED RIGHT!\n");
                printf("CONGRATULATIONS\n");
                amount = 3;
            } else {
                for (count = 0; count <= 0; count++) {
                    printf("You have another attempt\n");
                    if (player2 > player1) {
                        printf("SMALLER\n");
                    } else {
                        printf("GREATER\n");
                    }
                }
            }
        }

        printf("Do you want to play again?\n");
        printf("Y\\N\n");
        scanf(" %c", &continuePlaying);
        system("cls");
    } while (continuePlaying == 'Y' || continuePlaying == 'y');

    return 0;
}

