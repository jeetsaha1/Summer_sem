// Block swap algorithm for array rotation.

#include<stdio.h>

void swap(int *arr, int *arr2, int n){
    for (int i = 0; i < n; i++)
    {
        int t = arr[i];
        arr[i] = arr2[i];
        arr2[i] = t;
    }
    
}

void block_swap_algo(int arr[],int n, int d){
    if(d==0|| d==n) return ;    //base case
    
    if(d == n-d){
        swap(arr,arr+d,d);
        return;
    }
    else if(d > n-d){
        swap(arr, arr+d, n-d);
        block_swap_algo(arr+n-d,d-(n-d),n-d);
    }
    else{
        swap(arr,arr+n-d,d);
        block_swap_algo(arr,n-d,d);
    }
}

int main(){
    //Intialization of array
    int n;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    //Entering the index no.
    int d;
    printf("Enter the index no.: ");
    scanf("%d",&d);
    block_swap_algo(arr,n,d);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}