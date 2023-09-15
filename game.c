#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // seed the random number generator
    int secretNumber = rand() % 100 + 1; // generate a random number between 1 and 100
    int guess;
    int tries = 0;
    printf("Guess the secret number between 1 and 100\n");
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        }
        tries++;
    } while (guess != secretNumber);
    printf("Congratulations! You guessed the secret number in %d tries\n", tries);
    return 0;
}
