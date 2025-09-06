# If and Else in C #

## Explanation ##

The if statement is used to make decisions in a program.
It checks a condition (an expression that is true or false) and executes code depending on the result.

### If Example ###

```c
int age = 15;

if (age < 18) {
    printf("You are underage");
}
```

If the condition is true (so, in this case, age is lower than 18), the code inside {} will run.

### Else Example ###

```c
int age = 20;

if (age < 18) {
    printf("You are underage");
}
else {
    printf("You are an adult");
}
```

If the first condition is false → the else block runs.

### Else If Example ###

```c
int age = 70;

if (age < 18) {
    printf("You are underage");
}
else if (age < 65) {
    printf("You are an adult");
}
else {
    printf("You are an elder");
}
```

You can chain multiple conditions with else if.
The first true condition is executed, and the rest are skipped.
If no condition is true, the else block is executed.
