```markdown
# C Number Guessing Game

## Description
This program implements a simple number guessing game. The computer generates a random secret number between 1 and 100, and the player tries to guess it. After each guess, the program tells the player if their guess was too high or too low. The game continues until the player guesses the correct number, at which point it reveals the number of attempts taken.

## Code Explanation

**1. Header Inclusions:**
```c
#include <stdio.h>  // For standard input/output functions (printf, scanf)
#include <stdlib.h> // For random number generation (rand, srand) and NULL
#include <time.h>   // For seeding the random number generator (time)
```
*   `stdio.h`: Provides `printf` for displaying messages and `scanf` for reading the player's guess.
*   `stdlib.h`: Provides `rand()` to generate random numbers and `srand()` to seed the random number generator. `NULL` is also defined here.
*   `time.h`: Provides `time()` function, commonly used to seed `srand` with a value that changes, ensuring different random numbers each time the program runs.

**2. `main` Function:**
```c
int main() {
    int secret, guess, attempts = 0;
```
*   `secret`: An integer variable to store the randomly generated secret number.
*   `guess`: An integer variable to store the player's current guess.
*   `attempts`: An integer variable initialized to 0, used to count how many guesses the player makes.

**3. Initialize Random Number Generator:**
```c
    // Initialize random number generator
    srand(time(NULL));
    secret = rand() % 100 + 1; // Random number between 1 and 100
```
*   `srand(time(NULL))`: This line "seeds" the random number generator.
    *   `time(NULL)` returns the current calendar time as a large integer. Using this value as a seed ensures that the sequence of random numbers generated by `rand()` will be different each time the program is run. If `srand()` is not called, or if it's seeded with the same value every time, `rand()` would produce the same sequence of numbers.
*   `secret = rand() % 100 + 1;`: This line generates the secret number.
    *   `rand()`: Returns a pseudo-random integer between 0 and `RAND_MAX` (a large constant defined in `stdlib.h`).
    *   `% 100`: The modulus operator gives the remainder when `rand()` is divided by 100. This results in a number between 0 and 99, inclusive.
    *   `+ 1`: Adding 1 shifts the range to be between 1 and 100, inclusive.

**4. Debug Line (Optional):**
```c
    printf("DEBUG: secret = %d\n", secret); // Debug line
```
*   This line prints the secret number to the console. It's useful for testing and debugging the game logic but should typically be removed or commented out in the final version of the game to make it challenging for the player.

**5. Welcome Messages:**
```c
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");
```
*   These lines print introductory messages to the player.

**6. Game Loop (`do-while`):**
```c
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
```
*   A `do-while` loop is used for the main game logic. This type of loop is suitable here because the player must make at least one guess.
*   `printf("Enter your guess: ");`: Prompts the player to enter their guess.
*   `scanf("%d", &guess);`: Reads the integer entered by the player and stores it in the `guess` variable.
*   `attempts++;`: Increments the `attempts` counter after each guess.
*   **Conditional Logic (`if-else if-else`):**
    *   `if (guess < secret)`: If the guess is lower than the secret number, it prints "Too low! Try again."
    *   `else if (guess > secret)`: If the guess is higher than the secret number, it prints "Too high! Try again."
    *   `else`: If neither of the above conditions is true, it means `guess == secret`. The player has guessed correctly. It prints a congratulatory message including the number of attempts.
*   `while (guess != secret);`: The loop continues as long as the `guess` is not equal to the `secret` number. Once the player guesses correctly, `guess == secret` becomes true, `guess != secret` becomes false, and the loop terminates.

**7. Return Statement:**
```c
    return 0; // Indicates successful execution
}
```
*   Returns 0 from `main`, indicating that the program finished successfully.

## How to Compile and Run

1.  **Save:** Save the code in a file named `guessing_game.c` (or any other `.c` name).
2.  **Compile:** Open a terminal or command prompt:
    ```bash
    gcc guessing_game.c -o guessing_game
    ```
3.  **Run:** Execute the compiled program:
    ```bash
    ./guessing_game
    ```

## Example Interaction

```
DEBUG: secret = 42  <-- (This line appears if the debug printf is active)
Welcome to the Number Guessing Game!
I have selected a number between 1 and 100.
Enter your guess: 50
Too high! Try again.
Enter your guess: 25
Too low! Try again.
Enter your guess: 40
Too low! Try again.
Enter your guess: 45
Too high! Try again.
Enter your guess: 42
Congratulations! You guessed the number in 5 attempts.
```

## Key Concepts

*   **Random Number Generation:**
    *   `srand()`: Seeds the random number generator, typically with `time(NULL)` for varied sequences.
    *   `rand()`: Generates pseudo-random integers.
    *   Modulo operator (`%`) and addition (`+`) are used to scale the random number to a desired range (1-100 in this case).
*   **Loops:**
    *   `do-while` loop: Used to ensure the game logic (prompting for a guess and checking it) runs at least once and continues until the correct guess is made.
*   **Conditional Statements:**
    *   `if-else if-else`: Used to compare the player's guess with the secret number and provide appropriate feedback ("Too low," "Too high," or "Congratulations").
*   **User Input/Output:**
    *   `printf()`: For displaying messages and prompts to the user.
    *   `scanf()`: For reading the user's input (their guess).
*   **Variables:** Used to store the secret number, the player's guess, and the number of attempts.
*   **Debugging:** The temporary `printf` for the secret number is a common debugging technique.

```