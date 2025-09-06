#include <stdio.h>

int main()
{
    int number;
    printf("Type your age: ");
    scanf("%d", &number);
    if (number < 18) {
        printf("You are underage");
    }
    else if (number < 65) {
        printf ("You are an adult");
    }
    else {
        printf("You are an elder");
    }
    return 0;
}