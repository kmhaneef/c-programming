#include <stdio.h>

// Function to delete an element from an array using pointers
int deleteElement(int *arr, int *size, int element) {
    int *ptr = arr;

    // Search for the element in the array
    int found = 0;
    for (int i = 0; i < *size; i++) {
        if (*ptr == element) {
            found = 1;
            break;
        }
        ptr++;
    }

    if (!found) {
        // Element not found in the array
        return 0;
    }

    // Shift elements to fill the gap
    ptr = arr;
    for (int i = 0; i < *size; i++) {
        if (*ptr == element) {
            // Found the element, skip it
            ptr++;
            continue;
        }

        // Copy the current element to the correct position
        *(ptr - found) = *ptr;
        ptr++;
    }

    // Decrement the size of the array
    (*size)--;
    return 1;
}

int main() {
    int size, elementToDelete;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the array elements
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to delete
    printf("Enter the element to delete: ");
    scanf("%d", &elementToDelete);

    // Delete the element using the deleteElement function
    int deletionResult = deleteElement(arr, &size, elementToDelete);

    if (deletionResult) {
        // Display the modified array
        printf("Array after deleting %d:\n", elementToDelete);
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Element %d not found in the array.\n", elementToDelete);
    }

    return 0;
}
