#include <stdio.h>
#include <string.h>

int main() {
    char line[100];

    // Example 1: Using fgets to read a line
    printf("Enter a line (fgets): ");
    fgets(line, sizeof(line), stdin);
    printf("You entered: %s", line);

    // Example 2: Using scanf with format specifier %s (reads until whitespace)
    // Note: This is not ideal for reading entire lines with spaces
    printf("Enter a line (scanf %%s): ");
    scanf("%s", line);
    printf("You entered: %s\n", line);

    // Example 3: Using scanf with format specifier %[^\n] (reads until newline)
    // Note: Need to consume the newline character left by previous input
    getchar(); // Consume the newline character
    printf("Enter a line (scanf %%[^\n]): ");
    scanf("%[^\n]", line);
    printf("You entered: %s\n", line);

    return 0;
}
