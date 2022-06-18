#include <stdio.h>
int main(){
    int n,i,j,k,count =0;
    printf("enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of the array: ");
    for(i =0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0;i<n;i++){
        for(j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                for(k = j; k<n; k++){
                    arr[k]= arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("printing the array after deletion of duplicate elements\n");
    for(i =0; i<n;i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}