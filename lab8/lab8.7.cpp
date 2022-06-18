#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    
    int arr1[n];
    printf("Enter elements of array1: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    int arr2[n];
    for(int i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
    
    printf("Elements of array 2: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}