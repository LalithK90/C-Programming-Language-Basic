#include <stdio.h>

int main() {
    // 1. Character Input and Output
    printf("Character Input and Output Example:\n");
    char ch;
    printf("Enter a character: ");
    ch = getchar(); // Reads a single character from user
    printf("You entered: ");
    putchar(ch);    // Prints the character
    printf("\n\n");

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

    // 3. Character Counting (count total characters in a file)
    printf("Character Counting Example:\n");
    FILE *file = fopen("source.txt", "r");
    int charCount = 0;
    if (file == NULL) {
        printf("Error opening file for character counting.\n\n");
    } else {
        while ((ch = fgetc(file)) != EOF) {
            charCount++;
        }
        printf("Total characters in source.txt: %d\n\n", charCount);
        fclose(file);
    }

    // 4. Line Counting (count total lines in a file)
    printf("Line Counting Example:\n");
    file = fopen("source.txt", "r");
    int lineCount = 0;
    if (file == NULL) {
        printf("Error opening file for line counting.\n\n");
    } else {
        while ((ch = fgetc(file)) != EOF) {
            if (ch == '\n') {
                lineCount++;
            }
        }
        printf("Total lines in source.txt: %d\n\n", lineCount);
        fclose(file);
    }

    // 5. Word Counting (count total words in a file)
    printf("Word Counting Example:\n");
    file = fopen("source.txt", "r");
    int wordCount = 0, inWord = 0;
    if (file == NULL) {
        printf("Error opening file for word counting.\n\n");
    } else {
        while ((ch = fgetc(file)) != EOF) {
            if (ch == ' ' || ch == '\n' || ch == '\t') {
                inWord = 0;
            } else if (inWord == 0) {
                inWord = 1;
                wordCount++;
            }
        }
        printf("Total words in source.txt: %d\n\n", wordCount);
        fclose(file);
    }

    return 0;
}