#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int *start = arr;
    int *end, temp;

    printf("Enter the array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", start + i);
    }

    end = arr + n - 1;

    // Reverse the array using pointers
    while(start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("\nReversed array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}