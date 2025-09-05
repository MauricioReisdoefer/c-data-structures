# Hello World in C #

As a starting point for this repository, we include the classic Hello, World! program written in C. This serves as a simple test to verify that your development environment is correctly set up before moving on to more complex data structures.

## Code ##

```c
#include <stdio.h> // Importing the standard I/O library for C

int main() { // Main entry point of a C program
    printf("Hello, World!"); // Prints "Hello, World!" to the console
    return 0; // Returns 0 to indicate successful execution
}
```

## Explanation ##

- #include <stdio.h> → Imports the Standard Input/Output library, required for the printf function.

- int main() → Defines the entry point of the program. Execution always starts here.

- printf("Hello, World!"); → Prints the text "Hello, World!" to the console.

- return 0; → Terminates the program, returning 0 to the operating system (a conventional way to indicate that everything worked correctly).

## How to Compile and Run ##

To compile the program using GCC:

```bash
gcc hello_world.c -o hello
```

And run the compiled file:

```bash
./hello
```

If you didn't understand the code, lookout for the C documentation here:
[C DOCUMENTATION](https://www.geeksforgeeks.org/c/c-hello-world-program/)
