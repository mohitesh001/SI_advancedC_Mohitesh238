#include <stdio.h>

int main() {
    int row, col;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    int a[row][col], b[row][col], sum[row][col];

    int *p1 = &a[0][0];
    int *p2 = &b[0][0];
    int *p3 = &sum[0][0];

    printf("\nEnter elements of First Matrix:\n");
    for(int i = 0; i < row * col; i++) {
        scanf("%d", p1 + i);
    }

    printf("\nEnter elements of Second Matrix:\n");
    for(int i = 0; i < row * col; i++) {
        scanf("%d", p2 + i);
    }

    // Addition using pointers
    for(int i = 0; i < row * col; i++) {
        *(p3 + i) = *(p1 + i) + *(p2 + i);
    }

    printf("\nSum of Matrices:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}