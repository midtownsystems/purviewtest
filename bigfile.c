#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    // Basic I/O
    printf("Hello, world!\n");

    // Variables and arithmetic
    int a = 10, b = 5;
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);

    // Loops
    for (int i = 1; i <= 5; ++i) {
        printf("Square of %d: %d\n", i, i * i);
    }

    // Conditionals
    int num = 7;
    if (isPrime(num))
        printf("%d is prime.\n", num);
    else
        printf("%d is not prime.\n", num);

    // Arrays
    int arr[] = {1, 2, 3, 4, 5};
    printf("Third element: %d\n", arr[2]);

    // Pointers
    int x = 42;
    int *ptr = &x;
    printf("Value at pointer: %d\n", *ptr);

    // Functions
    int fact = factorial(5);
    printf("Factorial of 5: %d\n", fact);

    return 0;
}