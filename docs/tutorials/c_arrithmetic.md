```markdown
# C Arithmetic Operations

## Description
This program demonstrates basic arithmetic operations (addition, subtraction, multiplication, division, and modulus) in C. It takes two integer inputs from the user and performs these operations, displaying the results.

## Code Explanation

**1. Header Inclusion:**
```c
#include <stdio.h>
```
This line includes the standard input/output library, which provides functions like `printf` for output and `scanf` for input.

**2. `perform_operations` Function:**
```c
void perform_operations(int a, int b) {
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    if (b != 0) {
        printf("Division: %d / %d = %d\n", a, b, a / b);
        printf("Modulus: %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division and modulus by zero are not allowed.\n");
    }
}
```
This function performs the arithmetic operations.

*   It takes two integer arguments, `a` and `b`.
*   It prints the result of addition (`a + b`), subtraction (`a - b`), and multiplication (`a * b`).
*   It checks if `b` is not zero before performing division (`a / b`) and modulus (`a % b`). If `b` is zero, it prints an error message because division by zero is undefined.
*   It uses `printf` with format specifiers (`%d` for integers) to display the operations and their results in a user-friendly format.

**3. `main` Function:**
```c
int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    perform_operations(num1, num2);

    return 0;
}
```
This is the main function where the program execution begins.

*   It declares two integer variables, `num1` and `num2`.
*   It prompts the user to enter two numbers using `printf`.
*   It reads the two integer inputs from the user using `scanf` with the format specifier `%d`.  The `&` before the variable names (`&num1`, `&num2`) provides the memory addresses where the input values should be stored.
*   It calls the `perform_operations` function, passing `num1` and `num2` as arguments.
*   It returns 0 to indicate successful program execution.

## Example Usage

To compile and run the code (assuming it's saved as `arithmetic.c`):

```bash
gcc arithmetic.c -o arithmetic
./arithmetic
```

The program will then prompt you to enter two numbers.

**Example interaction:**

```
Enter first number: 10
Enter second number: 3
```

**Expected output:**

```
Addition: 10 + 3 = 13
Subtraction: 10 - 3 = 7
Multiplication: 10 * 3 = 30
Division: 10 / 3 = 3
Modulus: 10 % 3 = 1
```

**Example with division by zero:**

```
Enter first number: 5
Enter second number: 0
```

**Expected output:**

```
Addition: 5 + 0 = 5
Subtraction: 5 - 0 = 5
Multiplication: 5 * 0 = 0
Division and modulus by zero are not allowed.
```

## Key Concepts

*   **Arithmetic Operators:**  `+` (addition), `-` (subtraction), `*` (multiplication), `/` (division), `%` (modulus).
*   **Integer Division:** When dividing integers, C performs integer division, truncating any fractional part of the result.
*   **Modulus Operator:**  Gives the remainder of an integer division.
*   **Input and Output:** Using `printf` for outputting text and `scanf` for reading user input.
*   **Function Calls:**  Using functions to organize code and perform specific tasks (in this case, the arithmetic operations).
*   **Conditional Statements (`if-else`):**  Handling potential errors, like division by zero.

```