#include <stdio.h>
void leftrotateby_K_place(int arr[],int n,int d){
    d = d % n;
    int temp[d];
    for (int i =0; i<d; i++){
            temp[i] = arr[i];
    }
    for (int i = d ; i<n ; i++){
        arr[i-d] = arr[i];
    }
    for(int i = n-d; i< n;i++ ){
        arr[i] = temp[i-(n-d)];
    }
}

int main(){
int n,d ; 

printf("\nthe value of n will be ");
scanf("%d",&n);
int arr[n];

printf("the value of d will be:");
scanf("%d",&d);


printf("\nenter the value of the valuess of aary");
for(int i =0;i<n;i++){
    scanf("%d",&arr[i]);
}
leftrotateby_K_place(arr,n,d);
printf("\nthe rotated array will be :");
for (int i=0;i<n;i++){
    printf("%d",arr[i]);
}
}