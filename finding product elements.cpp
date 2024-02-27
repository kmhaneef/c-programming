#include <stdio.h>

void findMaxProductElements(int arr[], int n) {
    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return;
    }

    int max1 = arr[0];
    int max2 = arr[1];

    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }

    printf("The two elements with maximum product are: %d and %d\n", max1, max2);
    printf("Maximum product: %lld\n", (long long)max1 * max2);
}

int main() {
    int arr[] = {1, -2, 3, 4, -5, 6, 7, 8, 9, -10};
    int n = sizeof(arr) / sizeof(arr[0]);

    findMaxProductElements(arr, n);

    return 0;
}

























































































0