#include <stdio.h>
#include <string.h>

// Function to print a string
void printString(char str[]) {
    printf("String: %s\n", str);
}

// Function to find the length of a string
int stringLength(char str[]) {
    return strlen(str);
}

// Function to copy one string to another
void copyString(char dest[], char src[]) {
    strcpy(dest, src);
}

// Function to concatenate two strings
void concatStrings(char dest[], char src[]) {
    strcat(dest, src);
}

// Function to compare two strings
int compareStrings(char str1[], char str2[]) {
    return strcmp(str1, str2);
}

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];

    // Print original strings
    printString(str1);
    printString(str2);

    // Find and print length of str1
    printf("Length of str1: %d\n", stringLength(str1));

    // Copy str1 to str3
    copyString(str3, str1);
    printf("After copying, str3: %s\n", str3);

    // Concatenate str2 to str1
    concatStrings(str1, str2);
    printf("After concatenation, str1: %s\n", str1);

    // Compare str1 and str2
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