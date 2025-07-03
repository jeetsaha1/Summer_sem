// Delete Element from Array at Desired or Specific Position 

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
        
    }
    int ele,idx;
    
    printf("Enter the index no: ");
    scanf("%d",&idx);
    if(idx>n){
        return 0;
    }
    for (int i =idx; i<n; i++)
    {
        arr[i] = arr[i+1] ;
    }
    n--;
    for (int j = 0; j < n; j++)
    {
        printf("%d ",arr[j]);
    }
    
    
    return 0;
}