#include <stdio.h>

int main()
{
    int a;
    char c;
    double d;

    // Using sizeof operator
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of char: %zu bytes\n", sizeof(c));
    printf("Size of double: %zu bytes\n", sizeof(d));
    printf("Size of literal 100: %zu bytes\n", sizeof(100));
    printf("Size of expression a + d: %zu bytes\n", sizeof(a + d));

    return 0;
}
