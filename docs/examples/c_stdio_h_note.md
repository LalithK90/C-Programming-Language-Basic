# stdio.h in C Programming

## What is stdio.h?
`stdio.h` stands for "Standard Input Output Header".  
It is a header file in C that allows you to use functions for input and output (I/O) operations.

## Main Functions in stdio.h

### printf()
- Used to print/output text to the screen.
- Example: `printf("Hello, World!");`

### scanf()
- Used to read/input values from the user.
- Example: `scanf("%d", &number);`

### getchar()
- Reads a single character from the keyboard.

### putchar()
- Prints a single character to the screen.

### gets() *(not recommended for safety reasons)*
- Reads a string from the user.

### puts()
- Prints a string to the screen.

### fopen(), fclose()
- Used to open and close files.

### fread(), fwrite()
- Used to read from and write to files.

### fprintf(), fscanf()
- Used to read from and write to files with formatted input/output.

## Usability
`stdio.h` is essential for most C programs because it allows you to:
- Display messages and results to the user.
- Get input from the user.
- Read from and write to files.

**In summary:**  
Whenever you want to interact with the user or files in C, you will likely use functions from `stdio.h`.  
Always include it at the top of your program with `#include <stdio.h>`.

---

## Example Usage

```c
#include <stdio.h>

int main() {
    int age;
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name); // Using scanf for string input (be cautious with buffer overflows)

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello, %s! You are %d years old.\n", name, age);

    // File I/O example (basic)
    FILE *file;
    file = fopen("example.txt", "w"); // Open file in write mode
    if (file != NULL) {
        fprintf(file, "This is a line written to the file.\n");
        fclose(file); // Close the file
        printf("Data written to example.txt\n");
    } else {
        printf("Error opening file.\n");
    }

    return 0;
}
```