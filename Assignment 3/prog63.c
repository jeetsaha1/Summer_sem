//Write a c program for bubble sort. 


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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}