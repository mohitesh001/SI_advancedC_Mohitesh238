#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int temp = n, sum = 0, count = 0, digit;

    while(temp != 0) {
        count++;
        temp /= 10;
    }

    temp = n;

    while(temp != 0) {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp /= 10;
    }

    if(sum == n)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isArmstrong(num))
        printf("%d is an Armstrong Number.", num);
    else
        printf("%d is not an Armstrong Number.", num);

    return 0;
}