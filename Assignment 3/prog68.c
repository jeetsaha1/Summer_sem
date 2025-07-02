// Write a c program for merge sort.

void merge(int arr[],int low,int mid,int high){
    int i = low;
    int j = mid+1;
    int k = 0;

    int temp[high-low+1];

    while (i<= mid && j<= high)
    {
        if(arr[i]<=arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }
    while(i<=mid){
        temp[k++] = arr[i++];
    }
    while (j<=high)
    {
        temp[k++] = arr[j++];
    }
    
    for (int g = 0; g < k; g++)
    {
        arr[low+g] = temp[g];
    }
    
}

void merge_sort(int arr[], int low, int high){
    if (low<high)
    {
        int mid = (low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
    
}

#include<stdio.h>


int main(){
    int n;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    //Calling the merge sort func.
    merge_sort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}