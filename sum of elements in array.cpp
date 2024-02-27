#include<stdio.h>

int arraySum(int arr[], int size) {
    if (size == 0) {
        return 0;
    } else {
        return arr[size - 1] + arraySum(arr, size - 1);
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    int result = arraySum(arr, size);

    printf("The sum of elements in the array is: %d\n", result);

    return 0;
}
