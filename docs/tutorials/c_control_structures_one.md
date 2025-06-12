```markdown
# C Control Structures - Part One

## Description
This program demonstrates various control flow structures in C. These structures allow you to control the order in which statements are executed in your program. The examples cover conditional statements (if-else, else-if, switch), looping constructs (while, for, do-while), and jump statements (break, continue, goto).

## Code Explanation

**1. Header Inclusion:**
```c
#include <stdio.h>
```
This line includes the standard input/output library, which provides functions like `printf` for displaying output.

**2. Informational Comments:**
The code begins with several multi-line comments (`/* ... */`) that explain the syntax and purpose of different C control structures. These are for educational purposes and are ignored by the compiler. For example:
```c
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
```

**3. `main` Function:**
This is the entry point of the program. It contains examples of each control structure.

```c
int main() {
    // If-Else Example
    int num = 7;
    if (num > 0) {
        printf("Number is positive\n");
    } else {
        printf("Number is not positive\n");
    }
```
*   **If-Else:** Checks if `num` (initialized to 7) is greater than 0. Since it is, "Number is positive" is printed. If `num` were 0 or negative, the `else` block would execute.

```c
    // Else-If Example
    if (num > 0) {
        printf("Positive\n");
    } else if (num == 0) {
        printf("Zero\n");
    } else {
        printf("Negative\n");
    }
```
*   **Else-If:** Provides multiple conditions. First, it checks if `num > 0` (true, so "Positive" is printed). If this were false, it would check `num == 0`. If both were false, the final `else` block would execute.

```c
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
```
*   **Switch:** Selects a block of code to execute based on the value of `day` (initialized to 2).
    *   `case 1:`: If `day` is 1.
    *   `case 2:`: If `day` is 2. "Tuesday" is printed.
    *   `break;`: Exits the `switch` statement. Without `break`, execution would "fall through" to the next case.
    *   `default:`: If `day` matches no other case.

```c
    // While Loop Example
    int i = 0;
    printf("While loop: ");
    while (i < 3) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
```
*   **While Loop:** Repeats a block of code as long as the condition (`i < 3`) is true. It prints 0, 1, 2.

```c
    // For Loop Example
    printf("For loop: ");
    for (int j = 0; j < 3; j++) {
        printf("%d ", j);
    }
    printf("\n");
```
*   **For Loop:** A compact loop structure.
    *   `int j = 0;`: Initialization (executes once at the beginning).
    *   `j < 3;`: Condition (checked before each iteration).
    *   `j++`: Update (executes after each iteration).
    *   It prints 0, 1, 2.

```c
    // Do-While Loop Example
    int k = 0;
    printf("Do-while loop: ");
    do {
        printf("%d ", k);
        k++;
    } while (k < 3);
    printf("\n");
```
*   **Do-While Loop:** Similar to `while`, but the condition (`k < 3`) is checked *after* the loop body executes. This means the loop body always runs at least once. It prints 0, 1, 2.

```c
    // Break Example
    printf("Break example: ");
    for (int m = 0; m < 5; m++) {
        if (m == 3) break; // Exits the loop when m is 3
        printf("%d ", m);
    }
    printf("\n");
```
*   **Break:** Immediately terminates the innermost loop (or `switch` statement) it's in. The loop prints 0, 1, 2, and then `break` is executed when `m` becomes 3.

```c
    // Continue Example
    printf("Continue example: ");
    for (int n = 0; n < 5; n++) {
        if (n == 2) continue; // Skips the rest of the iteration when n is 2
        printf("%d ", n);
    }
    printf("\n");
```
*   **Continue:** Skips the remaining statements in the current iteration of the loop and proceeds to the next iteration. When `n` is 2, `printf` is skipped, and the loop continues with `n` becoming 3. It prints 0, 1, 3, 4.

```c
    // Goto and Label Example
    printf("Goto example: ");
    int p = 0;
start_label: // This is a label
    printf("%d ", p);
    p++;
    if (p < 3) goto start_label; // Jumps to the 'start_label'
    printf("\n");

    return 0; // Indicates successful execution
}
```
*   **Goto and Label:** `goto` unconditionally transfers control to a statement marked by a label (`start_label:`). This example creates a loop that prints 0, 1, 2. `goto` should be used sparingly as it can make code difficult to read and debug.

## Example Usage

To compile and run the code (assuming it's saved as `control_structures.c`):

```bash
gcc control_structures.c -o control_structures
./control_structures
```

**Expected output:**

```
Number is positive
Positive
Tuesday
While loop: 0 1 2 
For loop: 0 1 2 
Do-while loop: 0 1 2 
Break example: 0 1 2 
Continue example: 0 1 3 4 
Goto example: 0 1 2 
```

## Key Concepts

*   **Statements and Blocks:** Basic units of execution and groups of statements.
*   **Conditional Execution:**
    *   `if`: Executes code if a condition is true.
    *   `if-else`: Executes one block of code if a condition is true, and another if false.
    *   `else-if`: Chains multiple conditions.
    *   `switch`: Selects one of many code blocks to execute based on an expression's value.
*   **Looping (Iteration):**
    *   `while`: Repeats a block of code as long as a condition is true (checked at the start).
    *   `for`: A compact way to create loops with initialization, condition, and update expressions.
    *   `do-while`: Repeats a block of code as long as a condition is true (checked at the end, so executes at least once).
*   **Jump Statements:**
    *   `break`: Exits a loop or switch statement.
    *   `continue`: Skips the current iteration of a loop and moves to the next.
    *   `goto`: Unconditionally transfers control to a labeled statement (use with caution).

```