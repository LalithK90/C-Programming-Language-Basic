```markdown
# C Line Input Examples

## Description
This program demonstrates and compares different methods for reading a line of text input from the user in C. It showcases:
1.  Using `fgets` (recommended for reading lines).
2.  Using `scanf` with the `%s` format specifier (reads until whitespace).
3.  Using `scanf` with the `%[^\n]` format specifier (reads until newline).

It also highlights the importance of handling the newline character (`\n`) that can be left in the input buffer by functions like `scanf`.

## Code Explanation

**1. Header Inclusions:**
```c
#include <stdio.h>  // For standard input/output functions (printf, fgets, scanf, getchar)
#include <string.h> // For string functions (though not directly used in this specific version, often useful with string input)
```

**2. `main` Function:**
```c
int main() {
    char line[100]; // Buffer to store the input line, with a size of 100 characters
```
*   A character array `line` is declared to hold the input string. It's good practice to define a reasonable buffer size to prevent overflows.

**Example 1: Using `fgets`**
```c
    // Example 1: Using fgets to read a line
    printf("Enter a line (fgets): ");
    fgets(line, sizeof(line), stdin);
    printf("You entered: %s", line);
```
*   `printf("Enter a line (fgets): ");`: Prompts the user for input.
*   `fgets(line, sizeof(line), stdin);`:
    *   `fgets` is generally the safest way to read a line of text.
    *   `line`: The buffer where the input string will be stored.
    *   `sizeof(line)`: The maximum number of characters to read (including the null terminator). This prevents buffer overflows.
    *   `stdin`: The standard input stream (usually the keyboard).
    *   `fgets` reads characters until `sizeof(line) - 1` characters are read, a newline character (`\n`) is encountered, or the end-of-file (EOF) is reached.
    *   **Important:** If a newline character is read, it is stored as part of the string in the buffer (just before the null terminator).
*   `printf("You entered: %s", line);`: Prints the entered line. Note that if `fgets` stored a newline, this `printf` will also print that newline, causing the cursor to move to the next line.

**Example 2: Using `scanf` with `%s`**
```c
    // Example 2: Using scanf with format specifier %s (reads until whitespace)
    // Note: This is not ideal for reading entire lines with spaces
    printf("Enter a line (scanf %%s): ");
    scanf("%s", line);
    printf("You entered: %s\n", line);
```
*   `printf("Enter a line (scanf %%s): ");`: Prompts the user.
*   `scanf("%s", line);`:
    *   `%s` reads a sequence of non-whitespace characters.
    *   It stops reading at the first whitespace character encountered (space, tab, newline).
    *   The whitespace character that terminates the input is **left in the input buffer**.
    *   This method is **not suitable** for reading lines that contain spaces, as it will only read the first word.
    *   **Security Risk:** `scanf("%s", line)` without a width specifier is vulnerable to buffer overflows if the input word is longer than the `line` buffer. A safer version would be `scanf("%99s", line)` for a buffer of size 100.
*   `printf("You entered: %s\n", line);`: Prints the (first word of the) entered line.

**Example 3: Using `scanf` with `%[^\n]`**
```c
    // Example 3: Using scanf with format specifier %[^\n] (reads until newline)
    // Note: Need to consume the newline character left by previous input
    getchar(); // Consume the newline character
    printf("Enter a line (scanf %%[^\n]): ");
    scanf("%[^\n]", line);
    printf("You entered: %s\n", line);

    return 0;
}
```
*   `getchar(); // Consume the newline character`:
    *   The previous `scanf("%s", ...)` call likely left a newline character (`\n`) in the input buffer (from when the user pressed Enter).
    *   If this newline is not consumed, the subsequent `scanf("%[^\n]", ...)` would immediately read this newline and consider the input to be empty.
    *   `getchar()` reads and discards this single leftover newline character.
*   `printf("Enter a line (scanf %%[^\n]): ");`: Prompts the user.
*   `scanf("%[^\n]", line);`:
    *   `%[^\n]` is a scanset. It reads all characters *except* the newline character (`\n`).
    *   It stops reading when a newline character is encountered.
    *   The newline character that terminates the input is **left in the input buffer**.
    *   This method can read lines with spaces.
    *   **Security Risk:** Like `%s`, `scanf("%[^\n]", line)` without a width specifier is vulnerable to buffer overflows. A safer version would be `scanf("%99[^\n]", line)`.
*   `printf("You entered: %s\n", line);`: Prints the entered line.

## How to Compile and Run

1.  **Save:** Save the code in a file named `line_input_example.c` (or any other `.c` name).
2.  **Compile:** Open a terminal or command prompt:
    ```bash
    gcc line_input_example.c -o line_input_example
    ```
3.  **Run:** Execute the compiled program:
    ```bash
    ./line_input_example
    ```

## Example Interaction

```
Enter a line (fgets): Hello World! This is a test.
You entered: Hello World! This is a test.
Enter a line (scanf %s): FirstWord SecondWord
You entered: FirstWord
Enter a line (scanf %[^\n]): Another line with spaces
You entered: Another line with spaces
```

**Explanation of Interaction:**
*   **`fgets`:** Reads the entire line "Hello World! This is a test." including the newline character pressed by the user. When printed, this newline causes the cursor to move down.
*   **`scanf %s`:** When "FirstWord SecondWord" is entered, `scanf %s` reads only "FirstWord". " SecondWord\n" remains in the input buffer.
*   **`getchar()`:** This call consumes the leading space character that was left in the buffer by the previous `scanf %s` (or the newline if only one word was entered). *Correction based on typical `scanf %s` behavior: `scanf %s` consumes leading whitespace, reads non-whitespace, and leaves the terminating whitespace (e.g., newline or next space) in the buffer. So, if "FirstWord SecondWord\n" was typed, `scanf %s` reads "FirstWord", leaving " SecondWord\n". The `getchar()` then consumes the space.* *A more robust way to clear the buffer up to the newline is often a loop: `while ((c = getchar()) != '\n' && c != EOF);`*
*   **`scanf %[^\n]`:** Reads "Another line with spaces". The newline character pressed by the user after this input remains in the buffer.

## Key Concepts and Best Practices

*   **`fgets()`:**
    *   **Pros:** Safer against buffer overflows because it takes buffer size as an argument. Reads the entire line, including spaces. Can optionally store the newline.
    *   **Cons:** Always reads the newline if it fits, which might need to be manually removed if not desired.
*   **`scanf("%s", ...)`:**
    *   **Pros:** Simple for reading single words.
    *   **Cons:** Stops at whitespace, making it unsuitable for lines with spaces. Prone to buffer overflows if input length isn't restricted (e.g., `scanf("%99s", ...)`). Leaves the terminating whitespace in the buffer.
*   **`scanf("%[^\n]", ...)`:**
    *   **Pros:** Can read lines with spaces.
    *   **Cons:** Prone to buffer overflows if input length isn't restricted (e.g., `scanf("%99[^\n]", ...)`). Leaves the newline character in the input buffer, which often needs to be handled (e.g., with `getchar()`) before subsequent input operations.
*   **Input Buffer Management:** Be aware that input functions (especially `scanf`) can leave characters (like `\n`) in the input buffer. These leftover characters can affect subsequent input calls. `getchar()` is a common way to consume a single leftover character. For more robust buffer clearing, a loop to read until newline or EOF is better.
*   **Buffer Overflow:** Always ensure your input buffers are large enough for expected input, and use length-limiting features of functions like `fgets` or width specifiers in `scanf` (e.g., `%99s`) to prevent writing past the end of the buffer.

**Recommendation:** For reading lines of text, `fgets()` is generally the preferred and safer method in C.

```