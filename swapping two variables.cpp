#include <stdio.h>

// Function to swap the values of two variables using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Input the values of the two variables
    printf("Enter the value of the first variable: ");
    scanf("%d", &num1);

    printf("Enter the value of the second variable: ");
    scanf("%d", &num2);

    // Display the values before swapping
    printf("Before swapping: \n");
    printf("First variable: %d\n", num1);
    printf("Second variable: %d\n", num2);

    // Call the swap function to interchange the values
    swap(&num1, &num2);

    // Display the values after swapping
    printf("\nAfter swapping: \n");
    printf("First variable: %d\n", num1);
    printf("Second variable: %d\n", num2);

    return 0;
}
