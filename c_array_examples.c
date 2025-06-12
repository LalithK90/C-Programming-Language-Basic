#include <stdio.h>

// Function to print all elements of an integer array
void printArray(int arr[], int size) {
    printf("Integer array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to find the sum of integer array elements
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to find the maximum element in the integer array
int maxArray(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to print a character array (string)
void printCharArray(char arr[]) {
    printf("Character array (string): %s\n", arr);
}

int main() {
    int numbers[] = {5, 8, 2, 9, 3};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printArray(numbers, size);

    int sum = sumArray(numbers, size);
    printf("Sum of array elements: %d\n", sum);

    int max = maxArray(numbers, size);
    printf("Maximum element in array: %d\n", max);

    // Character array example
    char name[] = "Hello, World!";
    printCharArray(name);

    return 0;
}