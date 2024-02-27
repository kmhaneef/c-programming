#include <stdio.h>
#include <stdlib.h>
void findLongestSubarray(int arr[], int n) {
    int *hashmap = (int *)malloc((2 * n + 1) * sizeof(int));
    int maxLength = 0, endIndex = -1, sum = 0;

    for (int i = 0; i < 2 * n + 1; i++)
        hashmap[i] = -1;

    for (int i = 0; i < n; i++) {
        sum += (arr[i] == 0) ? -1 : 1;
        if (sum == 0) {
            maxLength = i + 1;
            endIndex = i;
        }
        else if (hashmap[sum + n] != -1) {
            if (i - hashmap[sum + n] > maxLength) {
                maxLength = i - hashmap[sum + n];
                endIndex = i;
            }
        } else {
            hashmap[sum + n] = i;
        }
    }

    if (endIndex != -1) {
        printf("Longest Subarray with equal 0s and 1s is from index %d to %d\n", endIndex - maxLength + 1, endIndex);
    } else {
        printf("No such subarray found.\n");
    }

    free(hashmap);
}

int main() {
    int arr[] = {0, 1, 1, 0, 1, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    findLongestSubarray(arr, n);

    return 0;
}
