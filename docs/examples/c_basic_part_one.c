#include <stdio.h>

/*
    Variable Names:
    - Variable names can include letters, digits, and underscores.
    - Must start with a letter or underscore.
    - Example: int age, float total_marks;
*/

/*
    Data Types and Sizes:
    - int: Integer (usually 4 bytes)
    - float: Floating point number (usually 4 bytes)
    - double: Double precision float (usually 8 bytes)
    - char: Single character (1 byte)
    - Example: int a; float b; char c;
*/

/*
    Constants:
    - Fixed values that do not change during program execution.
    - Use #define or const keyword.
    - Example: #define PI 3.14 or const int MAX = 100;
*/

/*
    Declarations:
    - Declaring a variable tells the compiler its type and name.
    - Example: int number; float price;
*/

/*
    Arithmetic Operators:
    - + (addition), - (subtraction), * (multiplication), / (division), % (modulus)
    - Example: int sum = a + b;
*/

/*
    Relational and Logical Operators:
    - Relational: >, <, >=, <=, ==, !=
    - Logical: && (AND), || (OR), ! (NOT)
    - Example: if (a > b && b != 0) { ... }
*/

/*
    Type Conversions:
    - Implicit: Automatic conversion by compiler (int to float)
    - Explicit: Manual conversion (casting), e.g., (float)a / b;
*/

/*
    Increment and Decrement Operators:
    - ++ (increment by 1), -- (decrement by 1)
    - Example: i++; j--;
*/

/*
    Bitwise Logical Operators:
    - & (AND), | (OR), ^ (XOR), ~ (NOT), << (left shift), >> (right shift)
    - Example: int c = a & b;
*/

/*
    Assignment Operators and Expressions:
    - = (assign), +=, -=, *=, /=, %=
    - Example: a += 5; // same as a = a + 5;
*/

/*
    Conditional Expressions:
    - Ternary operator: condition ? value_if_true : value_if_false
    - Example: int min = (a < b) ? a : b;
*/

/*
    Precedence and Order of Evaluation:
    - Operators have precedence (priority) and associativity (left/right).
    - Example: *, / have higher precedence than +, -
    - Use parentheses () to control order.
*/

int main() {
    // Example usage of above concepts

    // Variable declaration and initialization
    int a = 10, b = 3;
    float x = 5.5;
    char letter = 'A';

    // Constant using #define
    #define PI 3.14159

    // Arithmetic operations
    int sum = a + b;
    int product = a * b;

    // Relational and logical operators
    if (a > b && b != 0) {
        printf("a is greater than b and b is not zero\n");
    }

    // Type conversion (casting)
    float div = (float)a / b;

    // Increment and decrement
    a++;
    b--;

    // Bitwise operator
    int bitwise_and = a & b;

    // Assignment operator
    x += 2.5;

    // Conditional expression
    int max = (a > b) ? a : b;

    // Precedence example
    int result = a + b * 2; // b*2 is evaluated first

    // Output
    printf("Sum: %d, Product: %d, Division: %.2f\n", sum, product, div);
    printf("Bitwise AND: %d\n", bitwise_and);
    printf("Max value: %d\n", max);
    printf("Result (precedence): %d\n", result);
    printf("Letter: %c\n", letter);
    printf("PI: %.5f\n", PI);

    return 0;
}