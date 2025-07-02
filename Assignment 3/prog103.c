// Write a c program to find out second largest element of an unsorted array.


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
    int max= INT_MIN;
    int sec_max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(max<arr[i]){
            sec_max = max;
            max = arr[i];
        }
        else if(arr[i]>sec_max && arr[i]<max){
            sec_max = arr[i];
        }
    }
    
    printf("The second largest element : %d",sec_max);

    
    return 0;
}