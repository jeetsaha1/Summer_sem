//Write a c program to find out second smallest element of an unsorted array. 


#include<stdio.h>
#include<limits.h>
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
    int min= INT_MAX;
    int sec_min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(min>arr[i]){
            sec_min = min;
            min = arr[i];
        }
        else if(arr[i]<sec_min && arr[i]>min){
            sec_min = arr[i];
        }
    }
    
    printf("The second largest element : %d",sec_min);

    
    return 0;
}