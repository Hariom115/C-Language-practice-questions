#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // seed the random number generator
    int playerScore = 0;
    int computerScore = 0;
    int playerChoice, computerChoice;
    char playAgain = 'y';

    while (playAgain == 'y') {
        printf("\nRock, Paper, Scissors!\n");
        printf("1. Rock\n2. Paper\n3. Scissors\n");
        printf("Enter your choice: ");
        scanf("%d", &playerChoice);

        computerChoice = rand() % 3 + 1; // generate a random number between 1 and 3

        // determine the winner
        if (playerChoice == computerChoice) {
            printf("It's a tie!\n");
        } else if (playerChoice == 1 && computerChoice == 3 ||
                   playerChoice == 2 && computerChoice == 1 ||
                   playerChoice == 3 && computerChoice == 2) {
            printf("You win!\n");
            playerScore++;
        } else {
            printf("Computer wins!\n");
            computerScore++;
        }

        // display the scores
        printf("Player: %d  Computer: %d\n", playerScore, computerScore);

        // ask the player if they want to play again
        printf("\nDo you want to play again? (y/n) ");
        scanf(" %c", &playAgain);
    }
    return 0;
}

