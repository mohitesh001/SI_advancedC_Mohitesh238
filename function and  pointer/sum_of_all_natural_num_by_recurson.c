#include <stdio.h>

// Recursive function to calculate sum
int sum(int n) {
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("Please enter a positive integer.");
    else
        printf("Sum of first %d natural numbers = %d", n, sum(n));

    return 0;
}