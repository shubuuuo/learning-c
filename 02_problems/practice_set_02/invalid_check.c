#include<stdio.h>

int main() {

    // Commented-out erroneous or incorrect code:

    // Declare an uninitialized variable 'a' and try to assign its value to 'b'
    // int a; b = a;  // This line would cause an error because 'b' is undeclared, and 'a' is uninitialized.

    // Attempt to perform a bitwise XOR operation, which is not equivalent to exponentiation
    // int v = 3^3;  // '^' is the bitwise XOR operator, not exponentiation. To calculate 3^3, use 3*3*3 or pow(3,3).
    // printf('%d', v);  // Incorrect format specifier, should be "%d" for integers.

    // Declare a character variable and attempt to assign a string (incorrect usage)
    // char dt = '21 dec 2023';  // Single quotes are for single characters, use double quotes for strings, and use a char array or string type.

    // Corrected code:

    // Performing a float calculation: 3.0/8 - 2 and storing the result in 'a'
    float a = 3.0/8 - 2;

    // Printing the value of 'a' with 4 decimal places
    printf("%.4f\n", a);

    // Calculate the expression 3 * 2 / 3 - 3 + 1 and store the result in 'b'
    // Note: Integer division is performed here, so the result will be an integer before being converted to float
    float b = 3 * 2 / 3 - 3 + 1;

    // Print the value of 'b' with no decimal places (%.f is incorrect; should be %.0f for zero decimal places)
    printf("%.0f\n", b);

    // Calculate the expression 3.0 + 1 and store the result in 'c'
    // The addition involves a floating-point number (3.0) and an integer (1), so the result will be a float
    float c = 3.0 + 1;

    // Print the value of 'c' with 4 decimal places
    printf("%.4f is a floating point number.\n", c);

    int e = 4;
    printf("%d %d %d \n", e, ++e, e++);

    return 0;
}
