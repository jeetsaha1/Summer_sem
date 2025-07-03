// Sort first half in ascending order and second half in descending. 


#include<stdio.h>

void bubble_sort_asscending(int arr[],int start,int end){
    for (int i = start; i < end-1; i++)
    {
        for (int j = start; j < end-i-(i-start); j++)
        {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
    
}

void bubble_sort_decending(int arr[],int start,int end){
    for (int i = start; i < end-1; i++)
    {
        for (int j = start; j < end-i-(i-start); j++)
        {
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
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
    int d = n/2;
    bubble_sort_asscending(arr,0,d);
    bubble_sort_decending(arr,d,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}