#include <stdio.h>

// Define symbolic constants using #define
#define PI 3.14159
#define MAX_SIZE 100
#define MESSAGE "Welcome to C programming!"

int main() {
    // Using symbolic constants
    float radius = 5.0;
    float area = PI * radius * radius; // Area of a circle

    printf("%s\n", MESSAGE);
    printf("The value of PI is: %.5f\n", PI);
    printf("The area of a circle with radius %.2f is %.2f\n", radius, area);
    printf("The maximum size allowed is: %d\n", MAX_SIZE);

    // You cannot change the value of a symbolic constant
    // PI = 3.14; // This will cause a compilation error

    return 0;
}