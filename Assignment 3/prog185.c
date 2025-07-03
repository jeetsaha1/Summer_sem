//Find the “Kth” max and min element of an array. 

#include<stdio.h>

void bubble_sort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j] = temp;
            }
        }
        
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
    bubble_sort(arr,n);
    int k;
    printf("Enter the index K: ");
    scanf("%d",&k);
    printf("The minimum value of kth index is %d\n",arr[k-1]);
    printf("The maximum value of kth index is %d\n",arr[n-k]);
    return 0;
}