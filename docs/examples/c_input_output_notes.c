#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>   // For character class testing and conversion

/*
    INPUT AND OUTPUT IN C

    Access to the Standard Library:
    - The standard library provides functions for input, output, file handling, and more.
    - Include with #include <stdio.h> and #include <stdlib.h>
*/

/*
    Standard Input and Output - Getchar and Putchar:
    - getchar(): Reads a single character from standard input (keyboard).
    - putchar(): Writes a single character to standard output (screen).
    - Example:
        char c = getchar();
        putchar(c);
*/

/*
    Formatted Output - Printf:
    - printf() prints formatted text to the screen.
    - Format specifiers: %d (int), %f (float), %c (char), %s (string)
    - Example: printf("Value: %d\n", x);
*/

/*
    Formatted Input - Scanf:
    - scanf() reads formatted input from the user.
    - Example: int n; scanf("%d", &n);
*/

/*
    In-memory Format Conversion:
    - Functions like sprintf() and sscanf() convert between strings and other data types in memory.
    - Example:
        char buffer[20];
        int num = 123;
        sprintf(buffer, "%d", num); // int to string
        sscanf(buffer, "%d", &num); // string to int
*/

/*
    File Access:
    - fopen(), fclose(), fprintf(), fscanf(), fgetc(), fputc(), fgets(), fputs()
    - Example:
        FILE *fp = fopen("file.txt", "r");
        if (fp != NULL) { fclose(fp); }
*/

/*
    Error Handling - Stderr and Exit:
    - fprintf(stderr, ...) prints error messages.
    - exit(status) ends the program (0 = success, nonzero = error).
    - Example:
        if (fp == NULL) {
            fprintf(stderr, "File error\n");
            exit(1);
        }
*/

/*
    Line Input and Output:
    - fgets() reads a line from a file or input.
    - fputs() writes a line to a file or output.
    - Example:
        char line[100];
        fgets(line, 100, stdin);
        fputs(line, stdout);
*/

/*
    SOME MISCELLANEOUS FUNCTIONS IN C

    Character Class Testing and Conversion:
    - The <ctype.h> library provides macros to test and convert characters.
    - isalpha(c): Returns non-zero if c is an alphabetic character.
    - isupper(c): Returns non-zero if c is uppercase.
    - islower(c): Returns non-zero if c is lowercase.
    - isdigit(c): Returns non-zero if c is a digit.
    - isspace(c): Returns non-zero if c is a space, tab, or newline.
    - toupper(c): Converts c to uppercase.
    - tolower(c): Converts c to lowercase.
*/

void characterTesting(char c) {
    printf("Testing character: %c\n", c);
    if (isalpha(c)) printf("Alphabetic\n");
    if (isupper(c)) printf("Uppercase\n");
    if (islower(c)) printf("Lowercase\n");
    if (isdigit(c)) printf("Digit\n");
    if (isspace(c)) printf("Whitespace\n");
    printf("To upper: %c\n", toupper(c));
    printf("To lower: %c\n", tolower(c));
}

/*
    Ungetc:
    - ungetc(c, fp) pushes the character c back onto the input stream of file fp.
    - Only one character of pushback is allowed per file.
    - Useful for "unreading" a character.
*/

void ungetcExample() {
    FILE *fp = fopen("test.txt", "w+");
    if (!fp) return;
    fputs("Hello", fp);
    rewind(fp);
    int ch = fgetc(fp);
    printf("Read: %c\n", ch);
    ungetc(ch, fp); // Push character back
    ch = fgetc(fp); // Read again
    printf("After ungetc, read: %c\n", ch);
    fclose(fp);
    remove("test.txt");
}

/*
    System Call:
    - system(s) executes the command in string s using the operating system shell.
    - Example: system("date"); // Prints the current date and time
*/

void systemCallExample() {
    printf("Calling system(\"date\"):\n");
    system("date");
}

/*
    Storage Management:
    - calloc(n, size): Allocates memory for n objects, initializes to zero.
    - Returns a pointer to the allocated memory, or NULL if allocation fails.
    - Must be cast to the appropriate type.
    - free(p): Frees memory previously allocated by calloc or malloc.
*/

void callocExample() {
    int n = 5;
    int *ip = (int *)calloc(n, sizeof(int));
    if (ip == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("calloc initialized values: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", ip[i]);
    }
    printf("\n");
    free(ip); // Always free allocated memory
}

int main() {
    // Getchar and Putchar example
    printf("Enter a character: ");
    char ch = getchar();
    printf("You entered: ");
    putchar(ch);
    printf("\n");

    // Printf and Scanf example
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);

    // In-memory format conversion
    char buffer[20];
    sprintf(buffer, "Number: %d", num); // int to string
    printf("Buffer contains: %s\n", buffer);

    int parsedNum;
    sscanf(buffer + 8, "%d", &parsedNum); // string to int (skip "Number: ")
    printf("Parsed number: %d\n", parsedNum);

    // File Access example
    FILE *fp = fopen("example.txt", "w");
    if (fp == NULL) {
        fprintf(stderr, "Error opening file for writing\n");
        exit(1);
    }
    fprintf(fp, "Hello, file!\n");
    fclose(fp);

    // Line Input and Output example
    char line[100];
    printf("Enter a line of text: ");
    getchar(); // consume leftover newline
    fgets(line, sizeof(line), stdin);
    printf("You entered: ");
    fputs(line, stdout);

    // Miscellaneous functions
    // remove("example.txt"); // Uncomment to delete the file
    // rename("example.txt", "new_example.txt"); // Uncomment to rename the file

    // Character class testing and conversion
    characterTesting('A');
    characterTesting('z');
    characterTesting('5');
    characterTesting(' ');

    // ungetc example
    ungetcExample();

    // System call example
    systemCallExample();

    // Storage management example
    callocExample();

    return 0;
}