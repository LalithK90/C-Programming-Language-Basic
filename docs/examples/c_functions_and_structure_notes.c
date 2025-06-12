#include <stdio.h>
#include <math.h>      // For sqrt() function (example of file inclusion)
#include <stdlib.h>    // For exit() function

/*
    FUNCTIONS AND PROGRAM STRUCTURE IN C

    Basics:
    - A function is a block of code that performs a specific task.
    - Syntax: return_type function_name(parameter_list) { ... }
    - Example: int add(int a, int b) { return a + b; }
*/

/*
    Functions Returning Non-Integers:
    - Functions can return any data type, not just int.
    - Example: float divide(float x, float y) { return x / y; }
*/

/*
    More on Function Arguments:
    - Arguments can be passed by value (default in C).
    - Arrays are passed as pointers.
    - Example: void printArray(int arr[], int size) { ... }
*/

/*
    External Variables:
    - Declared outside all functions, accessible by any function.
    - Use 'extern' keyword to declare in other files.
    - Example: int globalVar = 10;
*/

/*
    Scope Rules:
    - Local variables: Declared inside a function/block, accessible only there.
    - Global variables: Declared outside all functions, accessible everywhere.
*/

/*
    Static Variables:
    - Declared with 'static' keyword.
    - Retain their value between function calls.
    - Example: static int count = 0;
*/

/*
    Register Variables:
    - Declared with 'register' keyword.
    - Suggests storing variable in CPU register for faster access.
    - Example: register int i;
*/

/*
    Block Structure:
    - C allows nested blocks (blocks within blocks).
    - Each block can have its own local variables.
*/

/*
    Initialization:
    - Variables can be initialized at the time of declaration.
    - Example: int x = 5;
*/

/*
    Recursion:
    - A function calling itself.
    - Useful for problems like factorial, Fibonacci, etc.
    - Example: int factorial(int n) { if (n <= 1) return 1; else return n * factorial(n-1); }
*/

/*
    The C Preprocessor:
    - Handles directives before actual compilation.
    - Examples: #include, #define, #ifdef, #ifndef
*/

/*
    File Inclusion:
    - #include <filename.h> or #include "filename.h"
    - Used to include standard or user-defined header files.
*/

/*
    Macro Substitution:
    - #define is used to define macros (symbolic constants or code snippets).
    - Example: #define PI 3.14159
*/

// Example function returning non-integer
float multiply(float a, float b) {
    return a * b;
}

// Example of recursion
int factorial(int n) {
    if (n <= 1) return 1;
    else return n * factorial(n - 1);
}

// Example of static variable
void staticCounter() {
    static int count = 0;
    count++;
    printf("Static count: %d\n", count);
}

// Example of external variable
int globalVar = 10;

int main() {
    // Initialization
    int x = 5;
    float y = 2.5;

    // Function call
    printf("Multiplication: %.2f\n", multiply(x, y));

    // Recursion example
    printf("Factorial of 5: %d\n", factorial(5));

    // Static variable example
    staticCounter();
    staticCounter();

    // Register variable example
    register int i;
    for (i = 0; i < 3; i++) {
        printf("Register variable i: %d\n", i);
    }

    // Block structure and scope
    {
        int blockVar = 20;
        printf("Block variable: %d\n", blockVar);
    }
    // printf("%d\n", blockVar); // Error: blockVar not accessible here

    // Using global variable
    printf("Global variable: %d\n", globalVar);

    // Macro substitution and file inclusion
    #define PI 3.14159
    printf("Value of PI: %.5f\n", PI);

    // Using a function from included header (math.h)
    printf("Square root of 16: %.2f\n", sqrt(16));

    return 0;
}