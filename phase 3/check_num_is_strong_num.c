#include<stdio.h>

int main() {
int num, temp, rem, fact, sum = 0;
printf("Enter a number: ");
 scanf("%d", &num);
temp = num;

   for(temp ; temp>0;temp = temp/10) {
        rem = temp % 10;   

        fact = 1;                         // for factorial of that digit 
        for(int i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
    }

    if(sum == num)
        printf("%d is a Strong Number", num);
    else
        printf("%d is not a Strong Number", num);

    return 0;
}