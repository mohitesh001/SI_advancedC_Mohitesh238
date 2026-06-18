/* determine the eqm index of arry where sum of elements at lower indices is eqaul 
to the summ of elements in higher indices
*/
#include<stdio.h>
int main(){
    int n;
    printf("the value of n will be: \n");
    scanf("%d",&n);
    int arr[n];
    printf("the elememts of array:\n");
    
    for (int i = 0 ; i<n;i++){
        scanf("%d",&arr[i]);
    }
      int eqi = arr[0];
    for (int i= 1 ; i<n-1;i++){   // ham loop  n-1 tak iss liye chalyege kyuki last ke left me koi element nhi h 
        int sumL =0;
        int sumR =0;
        for (int j = i-1; j>=0;j--){    // ye loop i-1 se start hoga kyu ye sare left wale lega 
            sumL = sumL + arr[j];        // j--  is liye hoga kyuki left me lena h 
        }
        for (int k = i+1; k<n;k++){   // ye loop sare right wale lega 
            sumR = sumR + arr[k];

        }
        if (sumL == sumR){
            eqi = arr[i];
            break;
        }
    }

            printf("we found the equllm condition:: at %d and the element is %d",i,eqi);
    
}