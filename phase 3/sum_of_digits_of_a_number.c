#include<stdio.h>
int main(){
    int  sum=0 , num , rem ;
    int temp ;
    printf("the number will be:");
    scanf("%d",&num);
    temp = num ; 
    for(temp; temp>0; temp = temp/10){
        rem = temp %10;
        sum = sum + rem ;

    }
    printf("\n the sum of the digits will be: %d", sum);

}