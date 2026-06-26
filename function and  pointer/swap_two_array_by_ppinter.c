#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];
    int *p1 = arr1;
    int *p2 = arr2;
    int temp;

    printf("Enter elements of First Array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", p1 + i);
    }

    printf("Enter elements of Second Array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", p2 + i);
    }

    // Swap arrays using pointers
    for(int i = 0; i < n; i++) {
        temp = *(p1 + i);
        *(p1 + i) = *(p2 + i);
        *(p2 + i) = temp;
    }

    printf("\nFirst Array after swapping:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(p1 + i));
    }

    printf("\n\nSecond Array after swapping:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(p2 + i));
    }

    return 0;
}