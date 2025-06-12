```markdown
# C Function Examples

## Description
This program demonstrates the basics of functions in C, including:
*   Defining and calling functions without parameters.
*   Defining and calling functions with parameters.
*   Understanding the scope of global and local variables.

## Code Explanation

**1. Header Inclusion:**
```c
#include <stdio.h>
```
*   Includes the standard input/output library for functions like `printf`.

**2. Global Variable:**
```c
// Global variable (accessible by all functions)
int globalVar = 100;
```
*   `globalVar` is declared outside of any function, making it a global variable.
*   It is initialized to `100`.
*   Global variables can be accessed and potentially modified by any function within the same file (and by other files if declared with `extern`).

**3. `greet` Function:**
```c
// Function without parameters
void greet() {
    // Local variable (only accessible inside greet)
    int localGreet = 10;
    printf("Hello! Welcome to C programming.\n");
    printf("Local variable in greet(): %d\n", localGreet);
    printf("Global variable in greet(): %d\n", globalVar);
}
```
*   `void greet()`: Defines a function named `greet` that takes no parameters (`void` in the parentheses) and does not return a value (`void` as the return type).
*   `int localGreet = 10;`: Declares and initializes a local variable `localGreet`. This variable is only accessible within the `greet` function. Its lifetime is limited to the execution of the `greet` function.
*   The function prints a welcome message, the value of its local variable `localGreet`, and the value of the global variable `globalVar`.

**4. `addNumbers` Function:**
```c
// Function with parameters
void addNumbers(int a, int b) {
    int sum = a + b; // Local variable
    printf("Sum of %d and %d is %d\n", a, b, sum);
    printf("Global variable in addNumbers(): %d\n", globalVar);
}
```
*   `void addNumbers(int a, int b)`: Defines a function named `addNumbers` that takes two integer parameters, `a` and `b`, and does not return a value.
*   `int sum = a + b;`: Calculates the sum of the parameters `a` and `b` and stores it in a local variable `sum`. This `sum` variable is only accessible within the `addNumbers` function.
*   The function prints the sum of the two input numbers and the value of the global variable `globalVar`.

**5. `main` Function:**
```c
int main() {
    int mainVar = 50; // Local variable in main

    // Call function without parameters
    greet();

    // Call function with parameters
    addNumbers(5, 10);

    printf("Local variable in main(): %d\n", mainVar);
    printf("Global variable in main(): %d\n", globalVar);

    return 0;
}
```
*   `int main()`: The entry point of the program.
*   `int mainVar = 50;`: Declares and initializes a local variable `mainVar`. This variable is only accessible within the `main` function.
*   `greet();`: Calls the `greet` function. Execution transfers to the `greet` function, and once `greet` completes, execution returns to the line after this call in `main`.
*   `addNumbers(5, 10);`: Calls the `addNumbers` function, passing the values `5` and `10` as arguments for parameters `a` and `b`, respectively.
*   The `main` function then prints the value of its local variable `mainVar` and the global variable `globalVar`.
*   `return 0;`: Indicates successful program execution.

## Example Usage

To compile and run the code (assuming it's saved as `functions.c`):

```bash
gcc functions.c -o functions
./functions
```

**Expected Output:**

```
Hello! Welcome to C programming.
Local variable in greet(): 10
Global variable in greet(): 100
Sum of 5 and 10 is 15
Global variable in addNumbers(): 100
Local variable in main(): 50
Global variable in main(): 100
```

## Key Concepts

*   **Functions:** Reusable blocks of code that perform a specific task. They help in organizing code, making it modular and easier to manage.
*   **Function Definition:** Specifies the function's name, return type, parameters, and the code it executes.
*   **Function Call:** Invokes a function to execute its code.
*   **Parameters (Arguments):** Values passed to a function when it is called. These allow functions to operate on different data.
*   **Return Type:** The data type of the value that a function sends back to the caller. `void` means the function does not return a value.
*   **Global Variables:** Variables declared outside any function. They are accessible from any function in the file. Their lifetime is the entire duration of the program's execution.
*   **Local Variables:** Variables declared inside a function or a block. They are only accessible within that function or block. Their lifetime is limited to the execution of the function or block in which they are defined.
*   **Scope:** The region of the program where a variable is accessible.

```