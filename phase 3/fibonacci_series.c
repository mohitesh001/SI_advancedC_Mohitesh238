#include<stdio.h>
int main(){
    int a=0 , b=1,c;
    int num;
    printf("\n enter the  value of number :");
    scanf("%d",&num);
    printf("\n the fibonacci series will be::");
    for(int i=2; i<num ;i++){
        c =a+b;
        printf(" %d ",c);
        a=b;
        b=c;
    }
    return 0  ;
}