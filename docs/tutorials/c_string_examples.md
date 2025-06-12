```markdown
# C String Examples

## Description
This program demonstrates fundamental string manipulation operations in C using functions from the `<string.h>` library. It includes examples of printing strings, finding string length, copying strings, concatenating strings, and comparing strings.

## Code Explanation

**1. Header Inclusions:**
```c
#include <stdio.h>  // For standard input/output functions (printf)
#include <string.h> // For string manipulation functions (strlen, strcpy, strcat, strcmp)
```
*   `stdio.h`: Provides `printf` for displaying output.
*   `string.h`: Contains declarations for various string handling functions.

**2. `printString` Function:**
```c
// Function to print a string
void printString(char str[]) {
    printf("String: %s\n", str);
}
```
*   Takes a character array `str[]` (which represents a C-style string) as input.
*   Uses `printf` with the `%s` format specifier to print the string followed by a newline.

**3. `stringLength` Function:**
```c
// Function to find the length of a string
int stringLength(char str[]) {
    return strlen(str);
}
```
*   Takes a character array `str[]` as input.
*   `strlen(str)`: This standard library function calculates the length of the string `str`. The length is the number of characters in the string up to, but not including, the null terminator (`\0`).
*   Returns the calculated length as an integer.

**4. `copyString` Function:**
```c
// Function to copy one string to another
void copyString(char dest[], char src[]) {
    strcpy(dest, src);
}
```
*   Takes two character arrays, `dest[]` (destination) and `src[]` (source), as input.
*   `strcpy(dest, src)`: This standard library function copies the string pointed to by `src` (including the null terminator) to the memory location pointed to by `dest`.
*   **Important:** The `dest` array must be large enough to hold the entire `src` string, including its null terminator, to avoid buffer overflows.

**5. `concatStrings` Function:**
```c
// Function to concatenate two strings
void concatStrings(char dest[], char src[]) {
    strcat(dest, src);
}
```
*   Takes two character arrays, `dest[]` (destination) and `src[]` (source), as input.
*   `strcat(dest, src)`: This standard library function appends a copy of the `src` string to the end of the `dest` string. The first character of `src` overwrites the null terminator at the end of `dest`. A new null terminator is added at the end of the combined string.
*   **Important:** The `dest` array must be large enough to hold its original content plus the content of `src` and the final null terminator to avoid buffer overflows.

**6. `compareStrings` Function:**
```c
// Function to compare two strings
int compareStrings(char str1[], char str2[]) {
    return strcmp(str1, str2);
}
```
*   Takes two character arrays, `str1[]` and `str2[]`, as input.
*   `strcmp(str1, str2)`: This standard library function compares the string `str1` to the string `str2` lexicographically (like in a dictionary).
*   It returns:
    *   `0` if `str1` and `str2` are equal.
    *   A negative value if `str1` is less than `str2`.
    *   A positive value if `str1` is greater than `str2`.

**7. `main` Function:**
```c
int main() {
    char str1[100] = "Hello"; // Destination buffer for concatenation needs to be large enough
    char str2[100] = "World"; // Source string
    char str3[100];           // Destination buffer for copy

    // Print original strings
    printString(str1);
    printString(str2);

    // Find and print length of str1
    printf("Length of str1: %d\n", stringLength(str1));

    // Copy str1 to str3
    copyString(str3, str1);
    printf("After copying, str3: %s\n", str3);

    // Concatenate str2 to str1
    // Ensure str1 has enough space: "Hello" (5) + "World" (5) + '\0' (1) = 11. Buffer is 100.
    concatStrings(str1, str2);
    printf("After concatenation, str1: %s\n", str1);

    // Compare str1 (now "HelloWorld") and str2 ("World")
    int cmp = compareStrings(str1, str2);
    if (cmp == 0) {
        printf("str1 and str2 are equal.\n");
    } else if (cmp < 0) {
        printf("str1 is less than str2.\n");
    } else {
        printf("str1 is greater than str2.\n");
    }

    return 0;
}
```
*   Declares three character arrays (`str1`, `str2`, `str3`) with a size of 100 to act as string buffers. `str1` and `str2` are initialized.
*   Calls `printString` to display the initial strings.
*   Calls `stringLength` to get and print the length of `str1`.
*   Calls `copyString` to copy `str1` into `str3` and then prints `str3`.
*   Calls `concatStrings` to append `str2` to `str1` and then prints the modified `str1`.
*   Calls `compareStrings` to compare the modified `str1` with `str2` and prints the comparison result.
*   Returns 0 to indicate successful execution.

## How to Compile and Run

1.  **Save:** Save the code in a file named `string_ops.c` (or any other `.c` name).
2.  **Compile:** Open a terminal or command prompt:
    ```bash
    gcc string_ops.c -o string_ops
    ```
3.  **Run:** Execute the compiled program:
    ```bash
    ./string_ops
    ```

## Expected Output

```
String: Hello
String: World
Length of str1: 5
After copying, str3: Hello
After concatenation, str1: HelloWorld
str1 is less than str2.
```
**Explanation of Comparison Result:**
After concatenation, `str1` becomes "HelloWorld". When comparing "HelloWorld" with "World":
*   'H' comes before 'W' in lexicographical order.
*   Therefore, "HelloWorld" is considered "less than" "World" by `strcmp`.

## Key Concepts

*   **C-style Strings:** Arrays of characters terminated by a null character (`\0`).
*   **`<string.h>` Library:** Provides a standard set of functions for string manipulation.
*   **`strlen()`:** Calculates the length of a string (excluding the null terminator).
*   **`strcpy()`:** Copies one string to another. Requires careful buffer size management to prevent overflows.
*   **`strcat()`:** Concatenates (appends) one string to the end of another. Also requires careful buffer size management.
*   **`strcmp()`:** Compares two strings lexicographically.
*   **Buffer Overflow:** A common security vulnerability that can occur if string operations write beyond the allocated bounds of a character array. Always ensure destination buffers are sufficiently large.
    *   For safer alternatives, consider `strncpy()`, `strncat()`, and `snprintf()` which allow specifying buffer sizes.

```
