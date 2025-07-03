// Find the sum of elements of the array using recursion.


#include<stdio.h>

int sumArr(int arr[], int n){
    if(n==0)
        return n;
    else{
        return arr[n-1] + sumArr(arr,n-1);
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
    printf("The sum is: %d",sumArr(arr,n));
    return 0;
}