#include <stdio.h>

int main() {
    int a, b, temp;
    int *p1, *p2;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Pointers store the addresses of a and b
    p1 = &a;
    p2 = &b;

    // Swap using pointers
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("\nAfter Swapping:");
    printf("\nFirst Number = %d", a);
    printf("\nSecond Number = %d", b);

    return 0;
}