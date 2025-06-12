```markdown
# C Functions and Program Structure Notes

## Description
This C file serves as a set of notes and examples illustrating various aspects of functions and program structure in the C language. It covers function basics, return types, arguments, variable scopes (external, static, register), block structure, initialization, recursion, and the C preprocessor (file inclusion, macro substitution).

## Code Explanation

**1. Header Inclusions:**
```c
#include <stdio.h>  // For standard input/output functions like printf
#include <math.h>   // For math functions like sqrt()
#include <stdlib.h> // For general utility functions like exit()
```
These lines include necessary header files that provide declarations for standard library functions.

**2. Informational Comments:**
The file is heavily commented with multi-line comments (`/* ... */`) that explain key concepts related to C functions and program structure. These include:
*   **Basics of Functions:** Syntax, definition, and example.
*   **Functions Returning Non-Integers:** How functions can return various data types.
*   **Function Arguments:** Passing by value, passing arrays (as pointers).
*   **External Variables (Global Variables):** Declaration, scope, and use of `extern`.
*   **Scope Rules:** Local vs. Global variables.
*   **Static Variables:** Behavior and use within functions.
*   **Register Variables:** Suggestion to the compiler for faster access.
*   **Block Structure:** Nested blocks and variable scope within blocks.
*   **Initialization:** Initializing variables at declaration.
*   **Recursion:** Functions calling themselves, with an example (factorial).
*   **The C Preprocessor:** Directives like `#include`, `#define`.
*   **File Inclusion:** Using `#include` for header files.
*   **Macro Substitution:** Using `#define` for constants and simple macros.

**3. Example Functions:**

*   **`multiply` Function:**
    ```c
    float multiply(float a, float b) {
        return a * b;
    }
    ```
    A simple function that takes two `float` arguments and returns their product (a `float`). This demonstrates a function returning a non-integer type.

*   **`factorial` Function (Recursive):**
    ```c
    int factorial(int n) {
        if (n <= 1) return 1; // Base case for recursion
        else return n * factorial(n - 1); // Recursive step
    }
    ```
    Calculates the factorial of an integer `n` using recursion.
    -   The *base case* (`n <= 1`) stops the recursion.
    -   The *recursive step* calls `factorial` with `n-1`.

*   **`staticCounter` Function (Static Variable):**
    ```c
    void staticCounter() {
        static int count = 0; // Static local variable
        count++;
        printf("Static count: %d\n", count);
    }
    ```
    Demonstrates a `static` local variable `count`.
    -   `static int count = 0;` is initialized only once when the program starts.
    -   The value of `count` persists across multiple calls to `staticCounter`.

**4. Global Variable:**
```c
int globalVar = 10;
```
A global variable `globalVar` initialized to 10, accessible throughout the file.

**5. `main` Function (Demonstrations):**
```c
int main() {
    // Initialization
    int x = 5;
    float y = 2.5;

    // Function call (multiply)
    printf("Multiplication: %.2f\n", multiply(x, y));

    // Recursion example (factorial)
    printf("Factorial of 5: %d\n", factorial(5));

    // Static variable example (staticCounter)
    staticCounter(); // Call 1
    staticCounter(); // Call 2 - count will be incremented from previous call

    // Register variable example
    register int i; // Suggestion to compiler
    for (i = 0; i < 3; i++) {
        printf("Register variable i: %d\n", i);
    }

    // Block structure and scope
    {
        int blockVar = 20; // Local to this block
        printf("Block variable: %d\n", blockVar);
    }
    // printf("%d\n", blockVar); // Error: blockVar not accessible here

    // Using global variable
    printf("Global variable: %d\n", globalVar);

    // Macro substitution and file inclusion
    #define PI 3.14159 // Macro defined within main (less common, usually global)
    printf("Value of PI: %.5f\n", PI);

    // Using a function from included header (math.h)
    printf("Square root of 16: %.2f\n", sqrt(16));

    return 0;
}
```
The `main` function demonstrates the usage of the concepts and functions defined/explained earlier:
*   **Initialization:** `x` and `y` are initialized.
*   **Function Calls:** `multiply`, `factorial`, and `staticCounter` are called.
*   **Register Variable:** `i` is declared as `register` (a hint to the compiler).
*   **Block Structure:** A nested block with `blockVar` demonstrates local scope.
*   **Global Variable:** `globalVar` is accessed.
*   **Macro Substitution:** `PI` is defined (note: `#define` is a preprocessor directive and is typically placed at the global scope or within headers, not usually inside `main` for constants like PI, though it's syntactically allowed).
*   **File Inclusion:** `sqrt()` from `math.h` is used.

## How to Compile and Run

1.  **Save:** Save the code in a file named `functions_structure.c` (or any other `.c` name).
2.  **Compile:** Open a terminal or command prompt. Since this code uses the `math.h` library, you might need to link the math library during compilation with `-lm`.
    ```bash
    gcc functions_structure.c -o functions_structure -lm
    ```
3.  **Run:** Execute the compiled program:
    ```bash
    ./functions_structure
    ```

## Expected Output

```
Multiplication: 12.50
Factorial of 5: 120
Static count: 1
Static count: 2
Register variable i: 0
Register variable i: 1
Register variable i: 2
Block variable: 20
Global variable: 10
Value of PI: 3.14159
Square root of 16: 4.00
```

## Key Concepts Illustrated

*   **Function Definition and Call:** The fundamental building blocks of C programs.
*   **Return Values:** Functions can return values of various types.
*   **Parameters:** Passing data to functions.
*   **Recursion:** A function calling itself to solve a problem by breaking it into smaller, similar subproblems.
*   **Variable Scope:**
    *   **Local Variables:** Confined to the function or block where they are declared.
    *   **Global (External) Variables:** Accessible from any function within the file.
    *   **Static Local Variables:** Retain their value between function calls, initialized only once.
*   **Storage Classes:**
    *   `static`: For persistent local variables or for limiting linkage of global variables/functions.
    *   `register`: A hint to the compiler to store a variable in a CPU register for speed.
*   **Block Structure:** Grouping statements and creating local scopes.
*   **C Preprocessor:**
    *   `#include`: For including header files.
    *   `#define`: For creating macros (symbolic constants or simple code replacements).
*   **Standard Libraries:** Using functions from `stdio.h`, `math.h`, `stdlib.h`.

```