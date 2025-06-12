#include <stdio.h>

/*
    POINTERS AND ARRAYS IN C

    Pointers and Addresses:
    - A pointer is a variable that stores the address of another variable.
    - Example: int *p; int a = 10; p = &a; // p points to a

    Pointers and Function Arguments:
    - Pointers allow functions to modify variables outside their scope (pass by reference).
    - Example: void change(int *x) { *x = 20; }

    Pointers and Arrays:
    - The name of an array is a pointer to its first element.
    - Example: int arr[3] = {1,2,3}; int *p = arr; // p points to arr[0]

    Address Arithmetic:
    - You can add/subtract integers to/from pointers to move through arrays.
    - Example: p + 1 points to the next element in the array.

    Character Pointers and Functions:
    - Strings are arrays of characters, often manipulated using char pointers.
    - Example: char *str = "Hello"; puts(str);

    Pointers are not Integers:
    - Pointers store addresses, not integer values.
    - Arithmetic on pointers is based on the size of the data type.

    Multi-Dimensional Arrays:
    - Arrays with more than one index (e.g., int matrix[2][3];)
    - Accessed as matrix[row][col]

    Pointer Arrays; Pointers to Pointers:
    - Array of pointers: int *arr[3];
    - Pointer to pointer: int **pp;

    Initialization of Pointer Arrays:
    - Example: const char *names[] = {"Alice", "Bob", "Carol"};

    Pointers vs. Multi-dimensional Arrays:
    - Multi-dimensional arrays are stored in contiguous memory.
    - Array of pointers can point to different memory locations.

    Command-line Arguments:
    - main can accept arguments: int main(int argc, char *argv[])
    - argc: argument count, argv: argument vector (array of strings)

    Pointers to Functions:
    - You can store function addresses in pointers and call them.
    - Example: int (*funcPtr)(int, int); funcPtr = add; funcPtr(2,3);
*/

// Example: Pointers and Addresses
void pointerExample() {
    int a = 10;
    int *p = &a;
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);
    printf("Value at pointer p: %d\n", *p);
}

// Example: Pointers and Function Arguments
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Example: Pointers and Arrays
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i)); // or arr[i]
    }
    printf("\n");
}

// Example: Character Pointers and Functions
void printString(char *str) {
    printf("String: %s\n", str);
}

// Example: Multi-Dimensional Arrays
void printMatrix(int matrix[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Example: Pointer Arrays and Pointers to Pointers
void pointerArraysExample() {
    const char *names[] = {"Alice", "Bob", "Carol"};
    for (int i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }
}

// Example: Command-line Arguments
// int main(int argc, char *argv[]) {
//     printf("Program name: %s\n", argv[0]);
//     if (argc > 1) {
//         printf("First argument: %s\n", argv[1]);
//     }
//     return 0;
// }

// Example: Pointers to Functions
int add(int a, int b) {
    return a + b;
}

int main(int argc, char *argv[]) {
    // Pointers and Addresses
    pointerExample();

    // Pointers and Function Arguments
    int x = 5, y = 10;
    printf("Before swap: x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("After swap: x=%d, y=%d\n", x, y);

    // Pointers and Arrays
    int arr[] = {1, 2, 3, 4, 5};
    printf("Array elements: ");
    printArray(arr, 5);

    // Address Arithmetic
    int *p = arr;
    printf("Second element using address arithmetic: %d\n", *(p + 1));

    // Character Pointers and Functions
    char str[] = "Hello, world!";
    printString(str);

    // Multi-Dimensional Arrays
    int matrix[2][3] = {{1,2,3},{4,5,6}};
    printf("Matrix:\n");
    printMatrix(matrix);

    // Pointer Arrays; Pointers to Pointers
    pointerArraysExample();

    // Initialization of Pointer Arrays
    const char *colors[] = {"Red", "Green", "Blue"};
    printf("Colors: %s, %s, %s\n", colors[0], colors[1], colors[2]);

    // Pointers vs. Multi-dimensional Arrays
    // (see matrix and pointerArraysExample above)

    // Command-line Arguments
    printf("Program name: %s\n", argv[0]);
    if (argc > 1) {
        printf("First argument: %s\n", argv[1]);
    }

    // Pointers to Functions
    int (*funcPtr)(int, int) = add;
    printf("Function pointer add(2,3): %d\n", funcPtr(2,3));

    return 0;
}