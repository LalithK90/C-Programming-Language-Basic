#include <stdio.h>

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

int main() {
    printf("Hello, World!\n"); // Print a message to the console
    printf("Answer %d\n", 42); // Print an integer value
    printf("Name %s\n", "Alice"); // Print a string value
   printf("X %.lf i %d", 3.14, 42); // Print a double and an integer value
    return 0; // Return 0 to indicate successful execution
}