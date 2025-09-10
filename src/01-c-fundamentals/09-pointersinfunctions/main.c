#include <stdio.h>

void changeBoth(int *c, int *d)
{
    int temp = *c;
    *c = *d;
    *d = temp;
}

int main()
{
    int a, b;
    a = 15;
    b = 10;

    changeBoth(&a, &b);
    printf("A : %d | B : %d", a, b);
}