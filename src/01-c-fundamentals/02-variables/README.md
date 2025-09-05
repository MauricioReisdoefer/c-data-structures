# Datatypes and Variables #

## Explanation ##

Variables are used to store data in a program. In the C programming language, you must declare the type of data a variable will hold. This allows the compiler to allocate the correct amount of memory and handle operations properly.

Below are four fundamental datatypes in C:

### Integer ###

Stores whole numbers (without decimals).
Typically uses 4 bytes of memory.

Example:

```c
// Datatype VariableName = Value
int age = 25;
```

### Character ###

Stores a single character (like 'a', '1', or '?').
Uses 1 byte of memory.
Characters are stored using ASCII values.

Example:

```c
// Datatype VariableName = Value
char letter = 'A';
```

### Floating Point or Float ###

Stores real numbers with decimals (e.g., 3.14).
Typically uses 4 bytes of memory.
Approximate precision: 6–7 decimal digits.

Example:

```c
float price = 19.99f;
```

Note: The f at the end indicates it's a float literal.

### Double Precision Floating Point ###

Similar to float, but with double the precision.
Typically uses 8 bytes of memory.
Approximate precision: 15–16 decimal digits.

Example:

```c
double pi = 3.1415926535;
```

### Summary Table ###

| Type   | Description                 | Size (typical) | Example              |
|--------|-----------------------------|----------------|----------------------|
| int    | Integer                     | 4 bytes        | `int count = 10;`    |
| char   | Character                   | 1 byte         | `char c = 'A';`      |
| float  | Real number (less precise)  | 4 bytes        | `float f = 1.23f;`   |
| double | Real number (more precise)  | 8 bytes        | `double d = 1.23;`   |
