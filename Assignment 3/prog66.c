//Write a c program for quick sort.

#include<stdio.h>
#include<stdlib.h>

int partition(int arr[], int low, int high){
    int temp;
    int pivot = arr[low];
    int i = low+1;
    int j = high;
    do{
        while (arr[i]<=pivot)
        {
            i++;
        }
        while (arr[j]>pivot)
        {
            j--;
        }
        if(i<j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        
    }while(i<j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;

}

void quick_sort(int arr[],int low, int high){
    int partition_idx;
    if(low<high){
        partition_idx = partition(arr, low, high);
        quick_sort(arr, low, partition_idx-1);
        quick_sort(arr, partition_idx+1, high);
    }
}

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
    
    //Calling the quick sort func.
    quick_sort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}