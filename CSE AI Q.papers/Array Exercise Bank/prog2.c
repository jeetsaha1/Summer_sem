// Rotate Array by K Positions 

#include<stdio.h>

void reverse(int arr[], int start, int end){
    if(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotate_array(int arr[], int n, int k){
    if (k>n)
    {
        k =k%n;
    }
    if (k<n)
    {
        k = k+n;
    }

    reverse(arr,0,n-k-1);
    reverse(arr, n-k,n-1);
    reverse(arr,0, n-1);
    
    
}

int main(){
    int n,k;
    printf("Enter the number of inputs : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of positions to rotate (K): "); 
    scanf("%d", &k); 
    rotate_array(arr, n, k); 
    printf("Rotated Array: "); 
    for (int i = 0; i < n; i++) { 
    printf("%d ", arr[i]); 
    } 
    printf("\n");
    return 0;
}