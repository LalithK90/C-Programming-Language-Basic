```markdown
# C Array Examples

## Description
This program demonstrates the use of arrays in C, including integer arrays and character arrays (strings). It includes functions to print array elements, calculate the sum of integer array elements, find the maximum element in an integer array, and print a character array.

## Code Explanation

**1. Header Inclusion:**
```c
#include <stdio.h>
```
This line includes the standard input/output library for functions like `printf`.

**2. `printArray` Function:**
```c
void printArray(int arr[], int size) {
    printf("Integer array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
```
This function takes an integer array `arr` and its size as input. It iterates through the array using a `for` loop and prints each element followed by a space. Finally, it prints a newline character.

**3. `sumArray` Function:**
```c
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
```
This function calculates the sum of the elements in an integer array. It initializes a `sum` variable to 0, then iterates through the array, adding each element to `sum`.  The final sum is returned.

**4. `maxArray` Function:**
```c
int maxArray(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
```
This function finds the maximum element in an integer array. It assumes the first element (`arr[0]`) is the maximum initially. It then iterates through the remaining elements, updating `max` if a larger element is found.

**5. `printCharArray` Function:**
```c
void printCharArray(char arr[]) {
    printf("Character array (string): %s\n", arr);
}
```
This function prints a character array, which in C represents a string. It uses the `%s` format specifier in `printf` to output the string.

**6. `main` Function:**
```c
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
```
This is the main function where the program execution begins.

*   It initializes an integer array `numbers` with some values.
*   It calculates the `size` of the array using `sizeof`.  `sizeof(numbers)` gets the total size in bytes, and `sizeof(numbers[0])` gets the size of one integer element.  Dividing these gives the number of elements.
*   It calls `printArray` to print the elements of the `numbers` array.
*   It calls `sumArray` to calculate the sum of the elements and prints the result.
*   It calls `maxArray` to find the maximum element and prints the result.
*   It initializes a character array `name` (a string).
*   It calls `printCharArray` to print the string.
*   It returns 0 to indicate successful execution.

## Example Usage

To compile and run the code (assuming it's saved as `array_example.c`):

```bash
gcc array_example.c -o array_example
./array_example
```

**Expected output:**
```
Integer array elements: 5 8 2 9 3 
Sum of array elements: 27
Maximum element in array: 9
Character array (string): Hello, World!
```

## Key Concepts

*   **Arrays:**  A contiguous block of memory holding elements of the same data type, accessed using an index.
*   **Integer Arrays:** Arrays specifically for storing integers.
*   **Character Arrays (Strings):** Arrays of characters, often null-terminated, used to represent text.
*   **Array Size:**  Determined using the `sizeof` operator.
*   **Function Calls:**  Using functions to encapsulate and reuse code (printing, summing, finding the maximum).
*   **Iteration with `for` Loops:**  Processing array elements one by one.

```