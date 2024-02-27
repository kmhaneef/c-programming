#include <stdio.h>

// Function to check if a number is prime using pointers
int isPrime(int *num) {
    if (*num <= 1) {
        return 0; // Not a prime number
    }

    for (int i = 2; i * i <= *num; i++) {
        if (*num % i == 0) {
            return 0; // Not a prime number
        }
    }

    return 1; // Prime number
}

int main() {
    int number;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is prime using the isPrime function
    if (isPrime(&number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
