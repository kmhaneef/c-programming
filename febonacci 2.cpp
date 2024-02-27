#include<stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Recursive function to calculate the sum of even Fibonacci numbers up to a limit
long long sumOfEvenFibonacci(int limit, int current, long long sum) {
    int fib = fibonacci(current);

    if (fib > limit) {
        return sum;
    }

    if (fib % 2 == 0) {
        sum += fib;
    }

    // Recur to the next Fibonacci number
    return sumOfEvenFibonacci(limit, current + 1, sum);
}

int main() {
    int limit;

    printf("Enter the limit for Fibonacci numbers: ");
    scanf("%d", &limit);

    if (limit < 0) {
        printf("Invalid input. Please enter a non-negative limit.\n");
        return 1;
    }

    long long result = sumOfEvenFibonacci(limit, 0, 0);

    printf("The sum of even Fibonacci numbers up to %d is: %lld\n", limit, result);

    return 0;
}
