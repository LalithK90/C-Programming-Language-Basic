```markdown
# C Loop Examples

## Description
This program demonstrates various looping constructs in the C programming language. It includes examples of `for` loops, `while` loops, `do-while` loops, nested loops, infinite loops (with `break` conditions for practical demonstration), and a loop implemented using the `goto` statement.

## Code Explanation

**1. Header Inclusion:**
```c
#include <stdio.h>
```
*   Includes the standard input/output library, necessary for using `printf` to display output.

**2. `main` Function:**
This is the entry point of the program where all loop examples are executed.

**`for` Loop Example:**
```c
    // For loop example: prints numbers 1 to 5
    printf("For loop example:\n");
    for (int i = 1; i <= 5; i++) {
        printf("i = %d\n", i);
    }
```
*   A `for` loop is used when the number of iterations is known or can be determined beforehand.
*   `int i = 1;`: Initialization - `i` is initialized to 1. This happens once at the beginning.
*   `i <= 5;`: Condition - The loop continues as long as `i` is less than or equal to 5. Checked before each iteration.
*   `i++`: Update - `i` is incremented by 1 after each iteration.
*   This loop prints numbers from 1 to 5.

**`while` Loop Example:**
```c
    // While loop example: prints numbers 1 to 5
    printf("\nWhile loop example:\n");
    int j = 1;
    while (j <= 5) {
        printf("j = %d\n", j);
        j++;
    }
```
*   A `while` loop repeats a block of code as long as a given condition is true.
*   `int j = 1;`: `j` is initialized before the loop.
*   `while (j <= 5)`: The condition is checked before each iteration.
*   `j++;`: The loop variable `j` must be updated inside the loop to eventually make the condition false and terminate the loop.
*   This loop also prints numbers from 1 to 5.

**`do-while` Loop Example:**
```c
    // Do-while loop example: prints numbers 1 to 5
    printf("\nDo-while loop example:\n");
    int k = 1;
    do {
        printf("k = %d\n", k);
        k++;
    } while (k <= 5);
```
*   A `do-while` loop is similar to a `while` loop, but the condition is checked *after* the loop body executes.
*   This guarantees that the loop body will execute at least once, even if the condition is initially false.
*   This loop also prints numbers from 1 to 5.

**Nested `for` Loops Example:**
```c
    // Nested loops example: prints a 3x3 grid using nested for loops
    printf("\nNested for loops example (3x3 grid):\n");
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 3; col++) {
            printf("(%d,%d) ", row, col);
        }
        printf("\n"); // Newline after each row
    }
```
*   Loops can be nested inside other loops.
*   The outer loop iterates `row` from 1 to 3.
*   For each iteration of the outer loop, the inner loop iterates `col` from 1 to 3.
*   This example prints a 3x3 grid of coordinates.

**Infinite `while` Loop Example (with `break`):**
```c
    // Infinite loop example using while(1)
    printf("\nInfinite loop example (press Ctrl+C to stop):\n");
    int count = 1;
    while (1) { // Condition is always true
        printf("Infinite loop iteration %d\n", count++);
        if (count > 3) break; // Remove this break for a true infinite loop
    }
```
*   `while(1)` creates an infinite loop because the condition `1` (true) never becomes false.
*   The `break;` statement is used here to exit the loop after 3 iterations for demonstration purposes. Without `break`, the loop would run indefinitely.

**Infinite `for` Loop Example (with `break`):**
```c
    // Infinite loop example using for(;;)
    printf("\nInfinite for loop example (press Ctrl+C to stop):\n");
    count = 1; // Re-initialize count
    for (;;) { // No initialization, condition, or update expressions
        printf("Infinite for loop iteration %d\n", count++);
        if (count > 3) break; // Remove this break for a true infinite loop
    }
```
*   `for (;;)` is another way to create an infinite loop, as it omits the initialization, condition, and update parts.
*   Again, `break;` is used to exit after 3 iterations.

**Loop using `goto` Statement:**
```c
    // Loop using goto statement
    printf("\nLoop using goto statement:\n");
    int m = 1;
start_loop: // This is a label
    if (m <= 5) {
        printf("m = %d\n", m);
        m++;
        goto start_loop; // Jump back to the label
    }

    return 0; // Indicates successful execution
}
```
*   The `goto` statement provides an unconditional jump to a labeled statement (`start_loop:`).
*   This example simulates a loop that prints numbers from 1 to 5.
*   **Caution:** While `goto` can create loops, its overuse can lead to "spaghetti code" which is hard to read, understand, and maintain. Modern programming practices generally discourage the use of `goto` for general loop control in favor of `for`, `while`, and `do-while`.

## How to Compile and Run

1.  **Save:** Save the code in a file named `loops_example.c` (or any other `.c` name).
2.  **Compile:** Open a terminal or command prompt:
    ```bash
    gcc loops_example.c -o loops_example
    ```
3.  **Run:** Execute the compiled program:
    ```bash
    ./loops_example
    ```

## Expected Output

```
For loop example:
i = 1
i = 2
i = 3
i = 4
i = 5

While loop example:
j = 1
j = 2
j = 3
j = 4
j = 5

Do-while loop example:
k = 1
k = 2
k = 3
k = 4
k = 5

Nested for loops example (3x3 grid):
(1,1) (1,2) (1,3) 
(2,1) (2,2) (2,3) 
(3,1) (3,2) (3,3) 

Infinite loop example (press Ctrl+C to stop):
Infinite loop iteration 1
Infinite loop iteration 2
Infinite loop iteration 3

Infinite for loop example (press Ctrl+C to stop):
Infinite for loop iteration 1
Infinite for loop iteration 2
Infinite for loop iteration 3

Loop using goto statement:
m = 1
m = 2
m = 3
m = 4
m = 5
```

## Key Concepts

*   **Iteration:** Repeating a block of code multiple times.
*   **`for` loop:** Ideal for when the number of iterations is known. Consists of initialization, condition, and update expressions.
*   **`while` loop:** Repeats as long as a condition is true. Condition is checked *before* each iteration.
*   **`do-while` loop:** Repeats as long as a condition is true. Condition is checked *after* each iteration, ensuring the loop body runs at least once.
*   **Nested Loops:** Placing one loop inside another, useful for working with multi-dimensional data or complex iteration patterns.
*   **Infinite Loops:** Loops that, by their condition, would run forever (e.g., `while(1)`, `for(;;)`). Must have an explicit `break` or other control flow mechanism to exit in practical programs.
*   **`break` statement:** Used to immediately exit the innermost loop (or `switch` statement).
*   **`goto` statement:** Unconditionally transfers control to a labeled statement. Its use for loop control is generally discouraged in favor of structured loop constructs.

```