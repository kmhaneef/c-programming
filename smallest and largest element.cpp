#include <stdio.h>

// Function to find the largest and smallest elements in an array using pointers
void findMinMax(int *arr, int size, int *max, int *min) {
    // Initialize max and min with the first element of the array
    *max = *min = arr[0];

    // Iterate through the array using pointers
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the array elements
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max, min;

    // Find the largest and smallest elements using the findMinMax function
    findMinMax(arr, size, &max, &min);

    // Display the results
    printf("Largest element in the array: %d\n", max);
    printf("Smallest element in the array: %d\n", min);

    return 0;
}
