#include <stdio.h>

int findMissingPositive(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        while (arr[i] > 0 && arr[i] <= size && arr[arr[i] - 1] != arr[i]) {
            // Swap the elements to put them in the correct position
            int temp = arr[i];
            arr[i] = arr[temp - 1];
            arr[temp - 1] = temp;
        }
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }

    return size + 1;
}

int main() {
    int arr[] = {3, 4, -1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = findMissingPositive(arr, size);

    printf("The smallest missing positive integer is: %d\n", result);

    return 0;
}
