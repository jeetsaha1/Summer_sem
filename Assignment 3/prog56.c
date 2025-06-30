// Write a c program to find out largest element of an array.

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
    for (int i = 0; i < n; i++)
    {
        if(max<arr[i])
            max = arr[i];
    }
    
    printf("The largest element : %d",max);

    
    return 0;
}