#include <stdio.h>

// Function to calculate the factorial of a number using pointers
unsigned long long calculateFactorial(int num) {
    if (num < 0) {
        // Factorial is not defined for negative numbers
        return 0;
    }

    // Initialize result to 1
    unsigned long long result = 1;
    unsigned long long *ptrResult = &result;

    // Calculate factorial using pointers
    for (int i = 1; i <= num; i++) {
        *ptrResult *= i;
    }

    return result;
}

int main() {
    int number;

    // Input the number
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    // Calculate the factorial using the calculateFactorial function
    unsigned long long factorial = calculateFactorial(number);

    if (factorial != 0) {
        // Display the result
        printf("Factorial of %d: %llu\n", number, factorial);
    } else {
        printf("Factorial is not defined for negative numbers.\n");
    }

    return 0;
}
