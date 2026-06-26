#include<stdio.h>

int fact(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++)
        f = f * i;
    return f;
}

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%d ", fact(i) / (fact(j) * fact(i - j)));
        }
        printf("\n");
    }

    return 0;
}