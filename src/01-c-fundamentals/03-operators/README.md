# Operators in C #

## Explanation ##

Operators are symbols that perform operations on variables and values.
C provides a wide variety of operators, which can be grouped into categories.

---

### Arithmetic Operators ###

Used for mathematical calculations.

Example:

```c
int a = 10, b = 3;
int sum = a + b;    // 13
int mod = a % b;    // 1 (remainder of division)
```

---

### Relational Operators ###

Used to compare two values, result is 1 (true) or 0 (false).

Example:

```c
int a = 10, b = 3;
int isGreater = a > b;  // 1 (true)
```

---

### Logical Operators ###

Used for logical conditions, usually with relational expressions.

Example:

```c
int a = 10, b = 3;
int result = (a > 5 && b < 5);  // 1 (true)
```

---

### Assignment Operators ###

Used to assign values to variables.
They can also combine assignment with arithmetic.

Example:

```c
int x = 5;
x += 3; // x = 8
x *= 2; // x = 16
```
