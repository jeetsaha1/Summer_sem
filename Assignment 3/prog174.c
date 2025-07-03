// Insert an Element Desired or Specific Position in an Array. 


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
    printf("Enter the element:");
    scanf("%d",&ele);
    printf("Enter the index no: ");
    scanf("%d",&idx);
    if(idx>n){
        return 0;
    }
    for (int i = n-1; i>=idx; i--)
    {
        arr[i+1] = arr[i] ;
    }
    arr[idx]= ele;
    n++;
    for (int j = 0; j < n; j++)
    {
        printf("%d ",arr[j]);
    }
    
    
    return 0;
}