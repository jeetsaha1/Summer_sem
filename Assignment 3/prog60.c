// Write a c program for delete an element at desired position in an array. 


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
    
    
    int idx;
    printf("Enter the index number for deleting element: ");
    scanf("%d",&idx);

    if (idx < 0 || idx >= n) {
        printf("Invalid index!\n");
        return 1;
    }

    for (int i = idx; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}