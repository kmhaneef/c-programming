#include <stdio.h>

void rearrangeArray(int arr[], int n) {
    int i, j = 0, temp;

    // Traverse the array
    for (i = 0; i < n; i++) {
        // If the current element is even
        if (arr[i] % 2 == 0) {
            // Swap the current element with the first odd element
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            // Move the index for odd elements to the next position
            j++;
        }
    }
}

int main() {
    // Example usage
    int arr[] = {4, 2, 8, 5, 7, 1, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    rearrangeArray(arr, n);

    printf("\nRearranged Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
