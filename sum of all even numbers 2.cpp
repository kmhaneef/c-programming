#include<stdio.h>

// Function to recursively calculate the sum of even numbers in a range
int sumOfEvens(int start, int end) {
    if (start > end) {
        return 0;
    } else {
        // If the current number is even, add it to the sum
        return (start % 2 == 0 ? start : 0) + sumOfEvens(start + 1, end);
    }
}

int main() {
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    if (start > end) {
        printf("Invalid range: Starting number should be less than or equal to the ending number.\n");
        return 1;
    }

    int result = sumOfEvens(start, end);

    printf("The sum of even numbers in the range [%d, %d] is: %d\n", start, end, result);

    return 0;
}
