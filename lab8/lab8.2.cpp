#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int mx=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>mx) mx=arr[i];
    }
    
    printf("Max element in the array is: %d",mx);
    return 0;
}