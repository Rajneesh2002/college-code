#include <stdio.h>

int main() {
    int n1;
    printf("Enter size of array1: ");
    scanf("%d",&n1);
    
    int arr1[n1];
    printf("Enter elements of array1: \n");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    
    int n2;
    printf("Enter size of array2: ");
    scanf("%d",&n2);
    
    int arr2[n2];
    printf("Enter elements of array2: \n");
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    
    if(n1!=n2) printf("Arrays can't be swapped.");
    else{   
        int arr3[n1];
        for(int i=0;i<n1;i++) arr3[i]=arr1[i];
         
        for(int i=0;i<n1;i++) arr1[i]=arr2[i];
           
        for(int i=0;i<n1;i++)  arr2[i]=arr3[i];
        
        printf("Elements of array 1 after swapping.\n");
        
        for(int i=0;i<n1;i++){
            printf("%d ",arr1[i]);
        }
        printf("\nElements of array 2 after swapping.\n");
        
        for(int i=0;i<n2;i++){
            printf("%d ",arr2[i]);
        }     
    }
    return 0;
}