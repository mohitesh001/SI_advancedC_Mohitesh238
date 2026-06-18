#include <stdio.h>
int main() {
    int arr[8];

    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }

    int curr_sum = 0;
    int maxisum = arr[0];

    for (int i = 0; i < 8; i++) {
        curr_sum += arr[i];

        if (curr_sum > maxisum) {
            maxisum = curr_sum;
        }

        if (curr_sum < 0) {
            curr_sum = 0;
        }
    }

    printf("Maximum subarray sum = %d\n", maxisum);

    return 0;
}