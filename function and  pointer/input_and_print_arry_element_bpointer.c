#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter the array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    
    printf("\nArray elements are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}