#include <stdio.h>

int main() {
    // For loop example: prints numbers 1 to 5
    printf("For loop example:\n");
    for (int i = 1; i <= 5; i++) {
        printf("i = %d\n", i);
    }

    // While loop example: prints numbers 1 to 5
    printf("\nWhile loop example:\n");
    int j = 1;
    while (j <= 5) {
        printf("j = %d\n", j);
        j++;
    }

    // Do-while loop example: prints numbers 1 to 5
    printf("\nDo-while loop example:\n");
    int k = 1;
    do {
        printf("k = %d\n", k);
        k++;
    } while (k <= 5);

    // Nested loops example: prints a 3x3 grid using nested for loops
    printf("\nNested for loops example (3x3 grid):\n");
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 3; col++) {
            printf("(%d,%d) ", row, col);
        }
        printf("\n");
    }

    // Infinite loop example using while(1)
    printf("\nInfinite loop example (press Ctrl+C to stop):\n");
    int count = 1;
    while (1) {
        printf("Infinite loop iteration %d\n", count++);
        if (count > 3) break; // Remove this break for a true infinite loop
    }

    // Infinite loop example using for(;;)
    printf("\nInfinite for loop example (press Ctrl+C to stop):\n");
    count = 1;
    for (;;) {
        printf("Infinite for loop iteration %d\n", count++);
        if (count > 3) break; // Remove this break for a true infinite loop
    }

    // Loop using goto statement
    printf("\nLoop using goto statement:\n");
    int m = 1;
start_loop:
    if (m <= 5) {
        printf("m = %d\n", m);
        m++;
        goto start_loop;
    }

    return 0;
}