// Display all array elements using recursion.

#include<stdio.h>

void printArr(int arr[], int n){
    if(n==0)
        return;
    else{
        printArr(arr, n-1);
        printf("%d ",arr[n-1]);
    }
}

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
    printArr(arr,n);
    return 0;
}