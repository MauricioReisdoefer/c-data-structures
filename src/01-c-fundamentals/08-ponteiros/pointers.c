#include <stdio.h>

int main()
{
    int *pointer;
    int number = 15;
    pointer = &number;

    printf("Pointer (Address of 'Number'): %p", pointer);
    printf("\nInside Pointer Address: %d", *pointer);
    return 0;
}