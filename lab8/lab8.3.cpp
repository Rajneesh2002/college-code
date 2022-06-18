#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int arr2[n];
    for(int i=0;i<n;i++){
        arr2[i]=arr[n-i-1];
    }
    
    printf("array after reversing elements\n");
    for(int i=0;i<n;i++) printf("%d ",arr2[i]);
    return 0;
}