#include <stdio.h>

// Global variable (accessible by all functions)
int globalVar = 100;

// Function without parameters
void greet() {
    // Local variable (only accessible inside greet)
    int localGreet = 10;
    printf("Hello! Welcome to C programming.\n");
    printf("Local variable in greet(): %d\n", localGreet);
    printf("Global variable in greet(): %d\n", globalVar);
}

// Function with parameters
void addNumbers(int a, int b) {
    int sum = a + b; // Local variable
    printf("Sum of %d and %d is %d\n", a, b, sum);
    printf("Global variable in addNumbers(): %d\n", globalVar);
}

int main() {
    int mainVar = 50; // Local variable in main

    // Call function without parameters
    greet();

    // Call function with parameters
    addNumbers(5, 10);

    printf("Local variable in main(): %d\n", mainVar);
    printf("Global variable in main(): %d\n", globalVar);

    return 0;
}