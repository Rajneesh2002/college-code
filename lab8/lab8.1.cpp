#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int sum=0;
    
    for(int i=0;i<n;i++) sum+=arr[i];
    
    printf("Sum of elements of array is %d",sum);
    printf("\nAverage of elements of array is %f",(float)sum/n);
    
    return 0;
}