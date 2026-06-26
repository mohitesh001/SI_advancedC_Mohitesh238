#include <stdio.h>

int main() {
    int n, key, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter the array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Search using pointer
    for(int i = 0; i < n; i++) {
        if(*(ptr + i) == key) {
            printf("%d found at position %d", key, i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("%d not found in the array.", key);
    }

    return 0;
}
