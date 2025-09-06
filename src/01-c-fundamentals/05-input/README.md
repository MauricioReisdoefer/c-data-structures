# Scanf in C #

## Explanation ##

The scanf function is used to read input from the user.
It requires a format specifier to know what type of data should be read, and the address (&) of the variable where the value will be stored.

Examples:

```c
int number;
scanf("%d", &number);  
// Reads an integer (e.g., 10)
```

```c
float value;
scanf("%f", &value);  
// Reads a floating-point number (e.g., 3.14)
```

```c
double d;
scanf("%lf", &d);  
// Reads a double precision number (e.g., 3.14159)
```

```c
char c;
scanf(" %c", &c);  
// Reads a single character (e.g., 'A')
// Note: the space before %c avoids reading leftover '\n'
```

Always use & before the variable name, because you need to pass the ADDRESS.
