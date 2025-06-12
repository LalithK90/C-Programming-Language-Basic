#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    // Initialize random number generator
    srand(time(NULL));
    secret = rand() % 100 + 1; // Random number between 1 and 100

    printf("DEBUG: secret = %d\n", secret); // Debug line

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");

    // Game loop
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secret) {
            printf("Too low! Try again.\n");
        } else if (guess > secret) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != secret);

    return 0;
}