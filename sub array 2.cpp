#include <stdio.h>

int max_subarray_sum(int arr[], int size) {
    int max_sum = arr[0];
    int current_sum = arr[0];

    for (int i = 1; i < size; i++) {
        current_sum = (arr[i] > current_sum + arr[i]) ? arr[i] : current_sum + arr[i];
        max_sum = (current_sum > max_sum) ? current_sum : max_sum;
    }

    return max_sum;
}

int main() {
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = max_subarray_sum(nums, size);

    printf("The maximum subarray sum is: %d\n", result);

    return 0;
}
