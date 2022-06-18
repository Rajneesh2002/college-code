#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter elements of array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]&1) arr[i]=1;
        else arr[i]=0;
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}