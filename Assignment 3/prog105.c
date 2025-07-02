// Copy all elements from an array to another array.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the ele %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int copied_arr[n] ;
    for (int j = 0; j < n; j++)
    {
        copied_arr[j] = arr[j];
    }
    
    printf("The copied array:");
    for (int  k = 0; k < n; k++)
    {
        printf("%d ",copied_arr[k]);
    }
    
    return 0;
}