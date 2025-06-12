```markdown
# C "Hello, World!" Program

## Description
This program is a classic "Hello, World!" example in C. It demonstrates the basic structure of a C program, how to include a standard library, use comments, and print output to the console using the `printf` function.

## Code Explanation

**1. Header Inclusion:**
```c
#include <stdio.h>
```
*   `#include`: This is a preprocessor directive. It tells the C preprocessor to include the contents of another file into the current source file before compilation.
*   `<stdio.h>`: This is the standard input/output header file. It contains declarations for standard input and output functions, such as `printf` (used for printing to the console) and `scanf` (used for reading input from the console).

**2. Comments:**
The code includes examples of different types of comments in C:
```c
// This is a single-line comment in C
// Single-line comments start with // and end at the end of the line

/* This is a multi-line comment in C
    You can write multiple lines
    Multi-line comments start with /* and end with */
   /* Used for longer documentation */

/** This is a documentation comment
 *  Commonly used for function or file documentation
 *  Each line typically starts with an asterisk
 *  Makes the code more readable
 */
```
*   **Single-line comments:** Start with `//` and extend to the end of the line. They are used for brief explanations.
*   **Multi-line comments:** Start with `/*` and end with `*/`. They can span multiple lines and are often used for more detailed explanations or for temporarily disabling blocks of code.
*   **Documentation comments:** Often start with `/**` and end with `*/`, with intermediate lines typically starting with `*`. These are a convention for writing comments that can be processed by documentation generation tools (like Doxygen), though in this simple example, they function like regular multi-line comments to the C compiler.

**3. `main` Function:**
```c
int main() {
    // ... code inside main ...
    return 0;
}
```
*   `int main()`: This is the main function where program execution begins. Every C program must have a `main` function.
    *   `int`: Specifies that the `main` function returns an integer value to the operating system. A return value of `0` typically indicates that the program executed successfully.
    *   `main`: The name of the function.
    *   `()`: Parentheses indicate that this is a function. They can optionally contain parameters (arguments) passed to the program from the command line, but in this simple example, no parameters are used.
*   `{ ... }`: The curly braces define the body of the `main` function, containing the statements to be executed.

**4. `printf` Statements:**
```c
    printf("Hello, World!\n"); // Print a message to the console
    printf("Answer %d\n", 42); // Print an integer value
    printf("Name %s\n", "Alice"); // Print a string value
    printf("X %.lf i %d", 3.14, 42); // Print a double and an integer value
```
*   `printf()`: This is a standard library function (from `stdio.h`) used to print formatted output to the standard output stream (usually the console).
*   `"Hello, World!\n"`: This is a string literal. The text inside the double quotes will be printed.
    *   `\n`: This is an escape sequence representing a newline character. It moves the cursor to the beginning of the next line on the console after printing.
*   `"Answer %d\n", 42`:
    *   `%d`: This is a format specifier for an integer. `printf` will replace `%d` with the value of the integer argument provided after the string (in this case, `42`).
*   `"Name %s\n", "Alice"`:
    *   `%s`: This is a format specifier for a string. `printf` will replace `%s` with the string argument provided (in this case, `"Alice"`).
*   `"X %.lf i %d", 3.14, 42`:
    *   `%.lf`: This is a format specifier for a `double` (long float). The `.` before `lf` can be used to specify precision (e.g., `%.2lf` for two decimal places). In this case, it prints the double `3.14`.
    *   `%d`: Again, for the integer `42`.
    *   The arguments `3.14` and `42` are matched with `%.lf` and `%d` in order.

**5. Return Statement:**
```c
    return 0; // Return 0 to indicate successful execution
```
*   `return 0;`: This statement ends the `main` function and returns the integer value `0` to the operating system. As mentioned, `0` conventionally signifies that the program completed without errors.

## How to Compile and Run

1.  **Save:** Save the code in a file named `hello.c` (or any other name with a `.c` extension).
2.  **Compile:** Open a terminal or command prompt and use a C compiler (like GCC) to compile the code:
    ```bash
    gcc hello.c -o hello
    ```
    *   `gcc`: The command to invoke the GCC compiler.
    *   `hello.c`: The name of your source code file.
    *   `-o hello`: This option specifies the name of the output executable file. If omitted, the executable is often named `a.out` by default.
3.  **Run:** Execute the compiled program:
    ```bash
    ./hello
    ```
    *   `./`: This tells the system to look for the executable in the current directory.

## Expected Output

```
Hello, World!
Answer 42
Name Alice
X 3.140000 i 42
```
*(Note: The exact output for the double `3.14` might vary slightly in precision if not explicitly formatted, e.g., `%.2lf`)*

## Key Concepts

*   **Basic Program Structure:** Every C program has a `main()` function.
*   **Preprocessor Directives:** Instructions like `#include` that are processed before compilation.
*   **Header Files:** Files (e.g., `stdio.h`) containing declarations for functions and other items.
*   **Comments:** Used to explain code and improve readability. Ignored by the compiler.
*   **`printf()` Function:** Used for sending formatted output to the console.
*   **Format Specifiers:** Placeholders in `printf` (like `%d`, `%s`, `%.lf`) that define how data should be printed.
*   **Escape Sequences:** Special character combinations (like `\n` for newline) that have a specific meaning.
*   **Return Statement:** Used to return a value from a function and terminate its execution.

```