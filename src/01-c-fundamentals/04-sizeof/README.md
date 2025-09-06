# Sizeof in C #

## Explanation ##

The sizeof operator returns the size (in bytes) of a data type or variable.
It is evaluated at compile-time for variables and types.

Example:

```c
int a;
char c;
double d;

printf("%zu", sizeof(a));  // Size of int (usually 4 bytes)
printf("%zu", sizeof(c));  // Size of char (1 byte)
printf("%zu", sizeof(d));  // Size of double (usually 8 bytes)
```

You can also use sizeof directly in types, example:

```c
printf("%zu", sizeof(int));    // Size of int
printf("%zu", sizeof(double)); // Size of double
```
