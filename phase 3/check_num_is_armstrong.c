#include<stdio.h>
#include<math.h>

int main() {
    int num, rem, count = 0;
    long int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int temp = num; temp > 0; temp = temp / 10) {
        count++;
    }

    printf("Number of digits = %d", count);

    for(int temp = num; temp > 0; temp = temp / 10) {
        rem = temp % 10;
        sum = sum + pow(rem, count);
    }
    if(sum == num) {
        printf("\n%d is an Armstrong Number", num);
    }
    else {
        printf("\n%d is not an Armstrong Number", num);
    }

    return 0;
}