#include <stdio.h>

// Function for Call by Value
void callByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("\nInside Call by Value:");
    printf("\na = %d, b = %d", a, b);
}

// Function for Call by Reference
void callByReference(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("\nInside Call by Reference:");
    printf("\na = %d, b = %d", *a, *b);
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore Function Call:");
    printf("\nx = %d, y = %d", x, y);

    // Call by Value
    callByValue(x, y);

    printf("\n\nAfter Call by Value:");
    printf("\nx = %d, y = %d", x, y);

    // Call by Reference
    callByReference(&x, &y);

    printf("\n\nAfter Call by Reference:");
    printf("\nx = %d, y = %d", x, y);

    return 0;
}