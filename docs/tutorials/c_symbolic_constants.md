```markdown
# C Symbolic Constants

## Description
This program demonstrates the use of symbolic constants in C. Symbolic constants are names given to constant values, making the code more readable and maintainable. They are typically defined using the `#define` preprocessor directive.

## Code Explanation

**1. Header Inclusion:**
```c
#include <stdio.h>
```
*   Includes the standard input/output library, which provides functions like `printf` for displaying output.

**2. Defining Symbolic Constants:**
```c
// Define symbolic constants using #define
#define PI 3.14159
#define MAX_SIZE 100
#define MESSAGE "Welcome to C programming!"
```
*   `#define`: This is a preprocessor directive. It instructs the C preprocessor to replace every occurrence of the symbolic name (e.g., `PI`) with its corresponding value (e.g., `3.14159`) before the actual compilation begins.
*   `PI`: A symbolic constant representing the mathematical constant Pi.
*   `MAX_SIZE`: A symbolic constant representing a maximum size, perhaps for an array or buffer.
*   `MESSAGE`: A symbolic constant representing a string literal.
*   **Convention:** Symbolic constants are often written in uppercase letters to distinguish them from variables.
*   **No Semicolon:** Note that `#define` directives do not end with a semicolon.

**3. `main` Function:**
```c
int main() {
    // Using symbolic constants
    float radius = 5.0;
    float area = PI * radius * radius; // Area of a circle

    printf("%s\n", MESSAGE);
    printf("The value of PI is: %.5f\n", PI);
    printf("The area of a circle with radius %.2f is %.2f\n", radius, area);
    printf("The maximum size allowed is: %d\n", MAX_SIZE);

    // You cannot change the value of a symbolic constant
    // PI = 3.14; // This will cause a compilation error

    return 0;
}
```
*   `float radius = 5.0;`: Declares a floating-point variable `radius`.
*   `float area = PI * radius * radius;`: Calculates the area of a circle using the symbolic constant `PI`. During preprocessing, `PI` will be replaced by `3.14159`.
*   `printf("%s\n", MESSAGE);`: Prints the string defined by the `MESSAGE` constant.
*   The subsequent `printf` statements display the values of `PI`, the calculated `area`, and `MAX_SIZE`.
*   The commented-out line `// PI = 3.14;` illustrates that symbolic constants defined with `#define` are not variables and cannot be assigned new values during program execution. Attempting to do so would result in a compilation error because the preprocessor would have replaced `PI` with `3.14159`, leading to an invalid assignment like `3.14159 = 3.14;`.
*   `return 0;`: Indicates successful program execution.

## How to Compile and Run

1.  **Save:** Save the code in a file named `symbolic_constants_example.c` (or any other `.c` name).
2.  **Compile:** Open a terminal or command prompt:
    ```bash
    gcc symbolic_constants_example.c -o symbolic_constants_example
    ```
3.  **Run:** Execute the compiled program:
    ```bash
    ./symbolic_constants_example
    ```

## Expected Output

```
Welcome to C programming!
The value of PI is: 3.14159
The area of a circle with radius 5.00 is 78.54
The maximum size allowed is: 100
```

## Key Concepts

*   **Symbolic Constants:** Names given to fixed values.
*   **`#define` Preprocessor Directive:** Used to define symbolic constants (and macros). The preprocessor performs text substitution before compilation.
*   **Readability:** Using symbolic constants (e.g., `PI` instead of `3.14159`) makes code easier to read and understand.
*   **Maintainability:** If a constant value needs to be changed (e.g., `MAX_SIZE`), it only needs to be updated in one place (the `#define` directive), rather than searching for all occurrences of the literal value throughout the code.
*   **Immutability:** Values defined by `#define` are not variables and cannot be changed at runtime.
*   **Scope:** Constants defined with `#define` are typically global in scope from the point of their definition to the end of the file (or until an `#undef` directive).

## Alternative: `const` Keyword

C also allows defining constants using the `const` keyword:
```c
const float PI_CONST = 3.14159;
const int MAX_SIZE_CONST = 100;
const char *MESSAGE_CONST = "Welcome!";
```
**Differences between `#define` and `const`:**
*   **Type Safety:** `const` variables have a specific data type, which is checked by the compiler. `#define` performs simple text substitution, which can sometimes lead to unexpected behavior if not used carefully.
*   **Scope:** `const` variables follow standard C scoping rules (e.g., they can be local to a function or block), whereas `#define` constants are typically global from their point of definition.
*   **Debugging:** `const` variables appear in the debugger's symbol table, making them easier to inspect during debugging. `#define` constants might not, as they are replaced before compilation.

For simple numeric or string constants, `#define` is widely used, especially in older C code and for constants that might be used in preprocessor conditionals. For more complex scenarios or when type safety and scope are important, `const` is often preferred in modern C programming.

```