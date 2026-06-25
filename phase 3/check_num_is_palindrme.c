#include<stdio.h>

int main() {
    int num, temp, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp > 0) {
        rem = temp % 10;      
        rev = rev * 10 + rem; 
        temp = temp / 10;     
    }

    if(rev == num)
        printf("%d is a Palindrome Number", num);
    else
        printf("%d is not a Palindrome Number", num);

    return 0;
}