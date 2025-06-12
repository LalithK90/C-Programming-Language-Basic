#include <stdio.h>

int main() {
    // Variable declaration and initialization
    int a = 10;         // Integer variable
    int b = 3;          // Another integer variable
    float x = 5.5;      // Floating-point variable
    float y = 2.0;      // Another float variable

    // Arithmetic operations with integers
    int sum = a + b;        // Addition
    int diff = a - b;       // Subtraction
    int prod = a * b;       // Multiplication
    int quot = a / b;       // Integer division (result will be an integer)
    int rem = a % b;        // Modulus (remainder after division)

    // Arithmetic operations with floats
    float fsum = x + y;     // Addition
    float fdiff = x - y;    // Subtraction
    float fprod = x * y;    // Multiplication
    float fquot = x / y;    // Division

    // Output results
    printf("Integer values: a = %d, b = %d\n", a, b);
    printf("Sum: %d + %d = %d\n", a, b, sum);
    printf("Difference: %d - %d = %d\n", a, b, diff);
    printf("Product: %d * %d = %d\n", a, b, prod);
    printf("Quotient: %d / %d = %d\n", a, b, quot);
    printf("Remainder: %d %% %d = %d\n", a, b, rem);

    printf("\nFloat values: x = %.2f, y = %.2f\n", x, y);
    printf("Sum: %.2f + %.2f = %.2f\n", x, y, fsum);
    printf("Difference: %.2f - %.2f = %.2f\n", x, y, fdiff);
    printf("Product: %.2f * %.2f = %.2f\n", x, y, fprod);
    printf("Quotient: %.2f / %.2f = %.2f\n", x, y, fquot);

    return 0;
}