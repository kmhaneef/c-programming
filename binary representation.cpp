#include<stdio.h>

// Function to recursively find binary representation of a decimal number
void decimalToBinary(int decimal) {
    if (decimal > 0) {
        // Recursive call with the quotient
        decimalToBinary(decimal / 2);

        // Print the remainder (binary digit)
        printf("%d", decimal % 2);
    }
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal < 0) {
        printf("Invalid input. Please enter a non-negative decimal number.\n");
        return 1;
    }

    printf("Binary representation of %d is: ", decimal);

    if (decimal == 0) {
        printf("0");
    } else {
        decimalToBinary(decimal);
    }

    printf("\n");

    return 0;
}
