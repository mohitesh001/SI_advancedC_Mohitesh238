#include<stdio.h>

int main() {
    int N, i, j, flag;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Prime numbers between 1 and %d are:\n", N);

    for(i = 2; i <= N; i++) {
        flag = 1; 

        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                flag = 0; 
                break;
            }
        }

        if(flag == 1)
            printf("%d ", i);
    }

    return 0;
}