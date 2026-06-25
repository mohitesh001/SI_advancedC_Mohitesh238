#include<stdio.h>
int main(){
    int temp , num ,rev=0,rem;
    printf("the number will be: ");
    scanf("%d",&num);
    temp  = num;
    for(temp ; temp>0 ; temp= temp/10){
        rem  = temp%10;
        rev = (rev*10) + rem;
    }
    printf("reverse  will be : %d ",  rev);
}