#include <stdio.h>

int main(){
    int n,i,j,temp;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter array elements:: ");
    for(i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n-1; i++){
        for(j=i+1;j< n;j++){
            if(arr[i]> arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("second largest number in the array is :: %d", arr[n-2]);
    return 0;
}