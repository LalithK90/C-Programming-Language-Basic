```markdown
# C "Hello, World!" Program

## Description
This is the quintessential "Hello, World!" program in C. Its purpose is to demonstrate the most basic structure of a C program and how to print a simple message to the console. It's often the first program learned when starting with a new programming language.

## Code Explanation

**1. Header Inclusion:**
```c
#include <stdio.h>
```
*   `#include`: This is a preprocessor directive. It tells the C preprocessor to include the contents of the specified file into the current source file before compilation begins.
*   `<stdio.h>`: This is the standard input/output header file. It contains declarations for standard input and output functions, most notably `printf()` which is used in this program to print text to the console.

**2. `main` Function:**
```c
int main() {
    // ... code inside main ...
    return 0;
}
```
*   `int main()`: This is the main function, which serves as the entry point for any C program. Execution of the program begins here.
    *   `int`: This specifies that the `main` function will return an integer value to the operating system upon completion. A return value of `0` conventionally indicates that the program executed successfully.
    *   `main`: This is the required name for the entry point function.
    *   `()`: The parentheses indicate that `main` is a function. They can optionally contain parameters (arguments passed to the program from the command line), but in this simple example, no parameters are used.
*   `{ ... }`: The curly braces define the body of the `main` function. All statements within these braces are part of the `main` function.

**3. `printf` Statement:**
```c
    printf("Hello, World!\n");
```
*   `printf()`: This is a standard library function (declared in `stdio.h`) used to print formatted output to the standard output stream, which is typically the console or terminal.
*   `"Hello, World!\n"`: This is a string literal. The text enclosed in double quotes is the content that `printf` will display.
    *   `\n`: This is an escape sequence that represents a newline character. When `printf` encounters `\n`, it moves the cursor to the beginning of the next line on the console after printing "Hello, World!".

**4. Return Statement:**
```c
    return 0;
```
*   `return 0;`: This statement terminates the `main` function and returns the integer value `0` to the operating system. As mentioned, this signifies successful program execution.

## How to Compile and Run

1.  **Save:** Save the code in a file named `hello_world.c` (or any other name with a `.c` extension).
2.  **Compile:** Open a terminal or command prompt. Use a C compiler (like GCC, which is common on Linux and macOS, or MinGW on Windows) to compile the code. The command is typically:
    ```bash
    gcc hello_world.c -o hello_world_executable
    ```
    *   `gcc`: Invokes the GCC compiler.
    *   `hello_world.c`: The name of your source code file.
    *   `-o hello_world_executable`: This option specifies the name for the output executable file. If you omit `-o <output_name>`, the compiler often defaults to `a.out` (on UNIX-like systems) or `a.exe` (on Windows).
3.  **Run:** After successful compilation, execute the compiled program:
    *   On UNIX-like systems (Linux, macOS):
        ```bash
        ./hello_world_executable
        ```
    *   On Windows:
        ```bash
        hello_world_executable.exe
        ```
    *   `./` (on UNIX-like systems) tells the shell to look for the executable in the current directory.

## Expected Output

When you run the program, the following text will be displayed on your console:
```
Hello, World!
```

## Key Concepts

*   **Basic Program Structure:** Every C program must have a `main()` function, which is the starting point of execution.
*   **Preprocessor Directives:** Instructions like `#include` that are processed by the C preprocessor before the code is compiled.
*   **Header Files:** Files (e.g., `stdio.h`) that contain declarations for functions, types, and macros provided by the standard library or other libraries.
*   **`printf()` Function:** The standard C function for producing formatted output.
*   **String Literals:** Sequences of characters enclosed in double quotes (e.g., `"Hello, World!\n"`).
*   **Escape Sequences:** Special character combinations (e.g., `\n` for newline) that represent non-printable or special characters.
*   **Return Statement:** Used to return a value from a function and terminate its execution. In `main`, `return 0;` indicates success.

```