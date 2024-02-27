#include <stdio.h>

// Function to copy the contents of one array to another using pointers
void copyArray(int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + i);
    }
}

int main() {
    int size;

    // Input the size of the arrays
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int sourceArray[size];
    int destinationArray[size];

    // Input the elements of the source array
    printf("Enter the elements of the source array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &sourceArray[i]);
    }

    // Copy the contents of the source array to the destination array
    copyArray(sourceArray, destinationArray, size);

    // Display the contents of both arrays
    printf("Source Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", sourceArray[i]);
    }

    printf("\nDestination Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", destinationArray[i]);
    }

    printf("\n");

    return 0;
}
