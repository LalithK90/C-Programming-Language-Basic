#include <stdio.h>

/*
    Statements and Blocks:
    - A statement is a single instruction (e.g., int a = 5;).
    - A block is a group of statements enclosed in curly braces { }.
    - Example:
        {
            int x = 10;
            printf("%d\n", x);
        }
*/

/*
    If-Else:
    - Used for decision making.
    - Syntax:
        if (condition) {
            // statements if condition is true
        } else {
            // statements if condition is false
        }
*/

/*
    Else-If:
    - Used to check multiple conditions.
    - Syntax:
        if (condition1) {
            // statements
        } else if (condition2) {
            // statements
        } else {
            // statements if none are true
        }
*/

/*
    Switch:
    - Used for multi-way branching based on the value of a variable.
    - Syntax:
        switch (variable) {
            case value1:
                // statements
                break;
            case value2:
                // statements
                break;
            default:
                // statements
        }
*/

/*
    Loops - While and For:
    - While loop: repeats as long as condition is true.
        int i = 0;
        while (i < 5) {
            printf("%d\n", i);
            i++;
        }
    - For loop: compact loop structure.
        for (int i = 0; i < 5; i++) {
            printf("%d\n", i);
        }
*/

/*
    Loops - Do-while:
    - Similar to while, but always runs at least once.
        int i = 0;
        do {
            printf("%d\n", i);
            i++;
        } while (i < 5);
*/

/*
    Break:
    - Used to exit a loop or switch statement immediately.
    - Example:
        for (int i = 0; i < 10; i++) {
            if (i == 5) break;
            printf("%d\n", i);
        }
*/

/*
    Continue:
    - Skips the rest of the loop body and continues with the next iteration.
    - Example:
        for (int i = 0; i < 5; i++) {
            if (i == 2) continue;
            printf("%d\n", i);
        }
*/

/*
    Goto's and Labels:
    - goto jumps to a labeled statement.
    - Use with caution; can make code hard to read.
    - Example:
        int i = 0;
    start:
        printf("%d\n", i);
        i++;
        if (i < 3) goto start;
*/

int main() {
    // If-Else Example
    int num = 7;
    if (num > 0) {
        printf("Number is positive\n");
    } else {
        printf("Number is not positive\n");
    }

    // Else-If Example
    if (num > 0) {
        printf("Positive\n");
    } else if (num == 0) {
        printf("Zero\n");
    } else {
        printf("Negative\n");
    }

    // Switch Example
    int day = 2;
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        default:
            printf("Other day\n");
    }

    // While Loop Example
    int i = 0;
    printf("While loop: ");
    while (i < 3) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // For Loop Example
    printf("For loop: ");
    for (int j = 0; j < 3; j++) {
        printf("%d ", j);
    }
    printf("\n");

    // Do-While Loop Example
    int k = 0;
    printf("Do-while loop: ");
    do {
        printf("%d ", k);
        k++;
    } while (k < 3);
    printf("\n");

    // Break Example
    printf("Break example: ");
    for (int m = 0; m < 5; m++) {
        if (m == 3) break;
        printf("%d ", m);
    }
    printf("\n");

    // Continue Example
    printf("Continue example: ");
    for (int n = 0; n < 5; n++) {
        if (n == 2) continue;
        printf("%d ", n);
    }
    printf("\n");

    // Goto and Label Example
    printf("Goto example: ");
    int p = 0;
start_label:
    printf("%d ", p);
    p++;
    if (p < 3) goto start_label;
    printf("\n");

    return 0;
}