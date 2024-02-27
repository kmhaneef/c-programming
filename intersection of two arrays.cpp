#include <stdio.h>

void findIntersection(int arr1[], int size1, int arr2[], int size2);

int main() {
    int size1, size2;

    // Input size of arrays
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Enter the elements of the first array:\n");
    int arr1[size1];
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    printf("Enter the elements of the second array:\n");
    int arr2[size2];
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Find and print the intersection
    printf("Intersection of the two arrays is:\n");
    findIntersection(arr1, size1, arr2, size2);

    return 0;
}

void findIntersection(int arr1[], int size1, int arr2[], int size2) {
    int i = 0, j = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            // arr1[i] is equal to arr2[j], so it's part of the intersection
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
}
