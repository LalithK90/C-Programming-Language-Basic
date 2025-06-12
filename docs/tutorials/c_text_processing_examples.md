```markdown
# C Text Processing Examples

## Description
This C program demonstrates several fundamental text processing tasks. It includes examples for:
1.  Reading a single character from standard input and writing it to standard output.
2.  Copying the content of one file (`source.txt`) to another (`copy.txt`).
3.  Counting the total number of characters in a file (`source.txt`).
4.  Counting the total number of lines in a file (`source.txt`).
5.  Counting the total number of words in a file (`source.txt`).

The program relies on standard C library functions for file and character manipulation.

## Code Explanation

**1. Header Inclusion:**
```c
#include <stdio.h>
```
*   Includes the standard input/output library, which provides functions for console I/O (`printf`, `getchar`, `putchar`) and file I/O (`FILE`, `fopen`, `fclose`, `fgetc`, `fputc`, `EOF`).

**2. `main` Function:**
This is the entry point of the program where all text processing examples are executed.

**Example 1: Character Input and Output**
```c
    // 1. Character Input and Output
    printf("Character Input and Output Example:\n");
    char ch;
    printf("Enter a character: ");
    ch = getchar(); // Reads a single character from user
    printf("You entered: ");
    putchar(ch);    // Prints the character
    printf("\n\n");
```
*   Prompts the user to enter a character.
*   `ch = getchar();`: Reads a single character from the standard input (keyboard) and stores it in the `ch` variable.
*   `putchar(ch);`: Writes the character stored in `ch` to the standard output (console).

**Example 2: File Copying**
```c
    // 2. File Copying (copy content from one file to another)
    printf("File Copying Example:\n");
    FILE *src, *dest;
    src = fopen("source.txt", "r");   // Open source file for reading
    dest = fopen("copy.txt", "w");    // Open destination file for writing
    if (src == NULL || dest == NULL) {
        printf("Error opening files for copying.\n\n");
    } else {
        int c;
        while ((c = fgetc(src)) != EOF) { // Read each character from source
            fputc(c, dest);               // Write to destination
        }
        printf("File copied from source.txt to copy.txt\n\n");
        fclose(src);
        fclose(dest);
    }
```
*   Declares two file pointers, `src` for the source file and `dest` for the destination file.
*   `src = fopen("source.txt", "r");`: Attempts to open "source.txt" in read mode (`"r"`).
*   `dest = fopen("copy.txt", "w");`: Attempts to open/create "copy.txt" in write mode (`"w"`). If "copy.txt" exists, its content will be overwritten.
*   **Error Handling:** Checks if either `fopen` call failed (returned `NULL`). If so, an error message is printed.
*   **Copy Loop:**
    *   `while ((c = fgetc(src)) != EOF)`: Reads characters one by one from `src` using `fgetc()`. `fgetc()` returns the character read as an `int` or `EOF` (End Of File) if the end of the file is reached or an error occurs.
    *   `fputc(c, dest);`: Writes the character `c` to the `dest` file.
*   `fclose(src); fclose(dest);`: Closes both files, ensuring data is flushed and resources are released.

**Example 3: Character Counting**
```c
    // 3. Character Counting (count total characters in a file)
    printf("Character Counting Example:\n");
    FILE *file = fopen("source.txt", "r");
    int charCount = 0;
    if (file == NULL) {
        printf("Error opening file for character counting.\n\n");
    } else {
        while ((ch = fgetc(file)) != EOF) { // Re-using 'ch' from character I/O example
            charCount++;
        }
        printf("Total characters in source.txt: %d\n\n", charCount);
        fclose(file);
    }
```
*   Opens "source.txt" in read mode.
*   Initializes `charCount` to 0.
*   Reads characters from the file one by one using `fgetc()`. For each character read (before `EOF`), `charCount` is incremented.
*   Prints the total `charCount`.
*   Closes the file.

**Example 4: Line Counting**
```c
    // 4. Line Counting (count total lines in a file)
    printf("Line Counting Example:\n");
    file = fopen("source.txt", "r"); // Re-opening the file
    int lineCount = 0;
    if (file == NULL) {
        printf("Error opening file for line counting.\n\n");
    } else {
        // A common way to count lines is to count newline characters.
        // If the file might not end with a newline, this might undercount by 1
        // or an empty file might be counted as 0 or 1 depending on convention.
        // This implementation counts newline characters.
        while ((ch = fgetc(file)) != EOF) {
            if (ch == '\n') {
                lineCount++;
            }
        }
        // Optional: If the last line doesn't end with '\n' and the file is not empty,
        // and charCount > 0 (from previous example, or re-calculate if needed)
        // and the last char read wasn't '\n', you might increment lineCount once more.
        // For simplicity, this example only counts '\n'.
        printf("Total lines in source.txt: %d\n\n", lineCount);
        fclose(file);
    }
```
*   Opens "source.txt" in read mode.
*   Initializes `lineCount` to 0.
*   Reads characters from the file. If a character is a newline (`\n`), `lineCount` is incremented.
*   Prints the total `lineCount`.
*   Closes the file.
*   *Note:* This method counts lines based on newline characters. The exact behavior for files not ending in a newline or empty files can vary based on specific requirements.

**Example 5: Word Counting**
```c
    // 5. Word Counting (count total words in a file)
    printf("Word Counting Example:\n");
    file = fopen("source.txt", "r"); // Re-opening the file
    int wordCount = 0, inWord = 0; // inWord is a flag: 0 = outside a word, 1 = inside a word
    if (file == NULL) {
        printf("Error opening file for word counting.\n\n");
    } else {
        while ((ch = fgetc(file)) != EOF) {
            if (ch == ' ' || ch == '\n' || ch == '\t') { // Whitespace characters act as delimiters
                inWord = 0; // Now outside a word
            } else if (inWord == 0) { // If previously outside a word and current char is not whitespace
                inWord = 1;       // Now inside a new word
                wordCount++;      // Increment word count
            }
        }
        printf("Total words in source.txt: %d\n\n", wordCount);
        fclose(file);
    }
```
*   Opens "source.txt" in read mode.
*   `wordCount`: Stores the total count of words.
*   `inWord`: A flag (0 or 1) to track whether the current position is inside a word or in whitespace.
*   The logic:
    *   If a whitespace character (` `, `\n`, `\t`) is encountered, set `inWord = 0`.
    *   If a non-whitespace character is encountered AND `inWord` is 0 (meaning we just transitioned from whitespace to a word), set `inWord = 1` and increment `wordCount`.
*   Prints the total `wordCount`.
*   Closes the file.

**Return Statement:**
```c
    return 0; // Indicates successful execution
}
```

## Prerequisites for Running

For the file-related examples (copying, character count, line count, word count) to work correctly, you need a file named `source.txt` in the same directory where you compile and run the executable.

**Example `source.txt`:**
```
Hello world.
This is a test file.
C programming is fun!
```

## How to Compile and Run

1.  **Create `source.txt`:** Create this file in the same directory as your C code, and add some text content to it.
2.  **Save the C code:** Save the C code above as `text_processing.c` (or any other `.c` name).
3.  **Compile the code:**
    ```bash
    gcc text_processing.c -o text_processing
    ```
4.  **Run the executable:**
    ```bash
    ./text_processing
    ```

## Expected Output (Example with the sample `source.txt` above)

The program will first prompt for character input:
```
Character Input and Output Example:
Enter a character: A <--- User enters 'A'
You entered: A

File Copying Example:
File copied from source.txt to copy.txt

Character Counting Example:
Total characters in source.txt: 60 <--- (This count includes newlines)

Line Counting Example:
Total lines in source.txt: 3

Word Counting Example:
Total words in source.txt: 11
```
**Note:**
*   The exact character count will depend on the content of your `source.txt`, including spaces and newline characters.
*   A new file `copy.txt` will be created with the same content as `source.txt`.

## Key Concepts

*   **Standard I/O:** `getchar()` for reading a single character, `putchar()` for writing a single character.
*   **File I/O:**
    *   `FILE*`: A pointer to a structure that holds information about a file stream.
    *   `fopen()`: Opens a file and returns a `FILE*`. Takes filename and mode (e.g., `"r"` for read, `"w"` for write) as arguments.
    *   `fclose()`: Closes an open file.
    *   `fgetc()`: Reads a single character from a file stream.
    *   `fputc()`: Writes a single character to a file stream.
    *   `EOF`: A macro representing the End-Of-File marker.
*   **Error Handling:** Checking the return value of `fopen()` for `NULL` to detect if a file could not be opened.
*   **Text Processing Logic:**
    *   **Character Counting:** Iterating through a file and incrementing a counter for each character.
    *   **Line Counting:** Typically involves counting newline (`\n`) characters.
    *   **Word Counting:** Using a state (e.g., `inWord` flag) to determine transitions between whitespace and non-whitespace characters to identify word boundaries.

```