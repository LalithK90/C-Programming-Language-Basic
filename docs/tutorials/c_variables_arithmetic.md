```markdown
# C Variables and Arithmetic Operations

## Description
This program demonstrates the declaration, initialization, and use of integer and floating-point variables in C. It also showcases basic arithmetic operations (addition, subtraction, multiplication, division, and modulus) performed on these variables and displays the results.

## Code Explanation

**1. Header Inclusion:**
```c
#include <stdio.h>
```
*   Includes the standard input/output library, which provides functions like `printf` for displaying formatted output to the console.

**2. `main` Function:**
This is the entry point of the program.

**Variable Declaration and Initialization:**
```c
int main() {
    // Variable declaration and initialization
    int a = 10;         // Integer variable
    int b = 3;          // Another integer variable
    float x = 5.5;      // Floating-point variable
    float y = 2.0;      // Another float variable
```
*   `int a = 10;`: Declares an integer variable `a` and initializes it with the value 10.
*   `int b = 3;`: Declares an integer variable `b` and initializes it with the value 3.
*   `float x = 5.5;`: Declares a floating-point variable `x` and initializes it with the value 5.5.
*   `float y = 2.0;`: Declares a floating-point variable `y` and initializes it with the value 2.0.

**Arithmetic Operations with Integers:**
```c
    // Arithmetic operations with integers
    int sum = a + b;        // Addition
    int diff = a - b;       // Subtraction
    int prod = a * b;       // Multiplication
    int quot = a / b;       // Integer division (result will be an integer)
    int rem = a % b;        // Modulus (remainder after division)
```
*   `sum = a + b;`: Adds `a` and `b`, stores the result (13) in `sum`.
*   `diff = a - b;`: Subtracts `b` from `a`, stores the result (7) in `diff`.
*   `prod = a * b;`: Multiplies `a` and `b`, stores the result (30) in `prod`.
*   `quot = a / b;`: Divides `a` by `b`. Since both `a` and `b` are integers, this is integer division. The fractional part of the result is truncated. So, 10 / 3 results in 3.
*   `rem = a % b;`: Calculates the remainder when `a` is divided by `b`. So, 10 % 3 results in 1.

**Arithmetic Operations with Floats:**
```c
    // Arithmetic operations with floats
    float fsum = x + y;     // Addition
    float fdiff = x - y;    // Subtraction
    float fprod = x * y;    // Multiplication
    float fquot = x / y;    // Division
```
*   `fsum = x + y;`: Adds `x` and `y`, stores the result (7.5) in `fsum`.
*   `fdiff = x - y;`: Subtracts `y` from `x`, stores the result (3.5) in `fdiff`.
*   `fprod = x * y;`: Multiplies `x` and `y`, stores the result (11.0) in `fprod`.
*   `fquot = x / y;`: Divides `x` by `y`. Since at least one operand is a float, this is floating-point division, preserving the fractional part. So, 5.5 / 2.0 results in 2.75.

**Output Results:**
```c
    // Output results
    printf("Integer values: a = %d, b = %d\n", a, b);
    printf("Sum: %d + %d = %d\n", a, b, sum);
    printf("Difference: %d - %d = %d\n", a, b, diff);
    printf("Product: %d * %d = %d\n", a, b, prod);
    printf("Quotient: %d / %d = %d\n", a, b, quot);
    printf("Remainder: %d %% %d = %d\n", a, b, rem);

    printf("\nFloat values: x = %.2f, y = %.2f\n", x, y);
    printf("Sum: %.2f + %.2f = %.2f\n", x, y, fsum);
    printf("Difference: %.2f - %.2f = %.2f\n", x, y, fdiff);
    printf("Product: %.2f * %.2f = %.2f\n", x, y, fprod);
    printf("Quotient: %.2f / %.2f = %.2f\n", x, y, fquot);

    return 0; // Indicates successful execution
}
```
*   Uses `printf` to display the initial values of the variables and the results of the arithmetic operations.
*   `%d` is the format specifier for printing integers.
*   `%.2f` is the format specifier for printing floating-point numbers with two digits after the decimal point.

## How to Compile and Run

1.  **Save:** Save the code in a file named `variables_arithmetic_example.c` (or any other `.c` name).
2.  **Compile:** Open a terminal or command prompt:
    ```bash
    gcc variables_arithmetic_example.c -o variables_arithmetic_example
    ```
3.  **Run:** Execute the compiled program:
    ```bash
    ./variables_arithmetic_example
    ```

## Expected Output

```
Integer values: a = 10, b = 3
Sum: 10 + 3 = 13
Difference: 10 - 3 = 7
Product: 10 * 3 = 30
Quotient: 10 / 3 = 3
Remainder: 10 % 3 = 1

Float values: x = 5.50, y = 2.00
Sum: 5.50 + 2.00 = 7.50
Difference: 5.50 - 2.00 = 3.50
Product: 5.50 * 2.00 = 11.00
Quotient: 5.50 / 2.00 = 2.75
```

## Key Concepts

*   **Variables:** Named storage locations in memory that can hold data.
*   **Data Types:**
    *   `int`: Used for whole numbers (integers).
    *   `float`: Used for numbers with decimal points (floating-point numbers).
*   **Declaration:** Specifying the name and data type of a variable.
*   **Initialization:** Assigning an initial value to a variable at the time of declaration.
*   **Arithmetic Operators:**
    *   `+` (Addition)
    *   `-` (Subtraction)
    *   `*` (Multiplication)
    *   `/` (Division)
        *   **Integer Division:** If both operands are integers, the result is an integer (fractional part is truncated).
        *   **Floating-Point Division:** If at least one operand is a float, the result is a float.
    *   `%` (Modulus): Gives the remainder of an integer division. Only applicable to integers.
*   **`printf()` Function:** Used for formatted output to the console.
*   **Format Specifiers:** Placeholders in `printf` (like `%d` for integers, `%.2f` for floats with 2 decimal places) that define how data should be printed.

```