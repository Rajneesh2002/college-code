#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n-1;i++){
        int c=0;      
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j] && arr[j]!=-1) {
                arr[j]=-1;
                c++;
            }            
        }
        if(c) printf("%d occurs %d times\n",arr[i],c+1);       
    }
    
    return 0;
}