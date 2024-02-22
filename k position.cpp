#include <stdio.h>

// Function to rotate an array to the right by k positions
void rotate_array(int arr[], int size, int k) {
    int temp[size];

    // Copy the last k elements to a temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[size - k + i];
    }

    // Shift the remaining elements to the right
    for (int i = size - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy back the temporary array to the beginning of the original array
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(nums) / sizeof(nums[0]);
    int k = 3;

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }

    rotate_array(nums, size, k);

    printf("\nRotated array by %d positions to the right: ", k);
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
