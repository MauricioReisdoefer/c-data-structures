#include <stdio.h>

int main()
{
    int a = 10, b = 3;

    // Arithmetic Operators
    int sum = a + b;       // Addition
    int diff = a - b;      // Subtraction
    int prod = a * b;      // Multiplication
    int div = a / b;       // Division (integer division)
    int mod = a % b;       // Modulo (remainder)

    // Relational Operators
    int equal = (a == b);   // Equals
    int notEqual = (a != b); // Not equals
    int greater = (a > b);   // Greater than
    int less = (a < b);      // Less than

    // Logical Operators
    int andOp = (a > 5 && b > 1);  // Logical AND
    int orOp = (a > 5 || b > 10);  // Logical OR
    int notOp = !(a > b);          // Logical NOT

    // Assignment Operators
    int x = 5;
    x += 3;   // Same as x = x + 3
    x *= 2;   // Same as x = x * 2

    return 0;
}
