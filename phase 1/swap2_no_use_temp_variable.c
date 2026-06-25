// swap 2 numbers using temporary variable 
#include<stdio.h>
int main(){
    int num1, num2, temp;
    printf("enter the numbers");
    scanf("%d %d ", &num1 ,&num2);
    printf("\n before swapping of two number : %d and %d",num1,num2);
    temp = num1; 
    num1=num2;
    num2 = temp;
    printf("\n the new swap numbers %d and %d" , num1 , num2);
}