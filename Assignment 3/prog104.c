// Count total number of negative elements in an array.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the ele %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int count= 0;
    for (int j = 0; j < n; j++)
    {
        if(arr[j]<0){
            count++;
        }
    }
    
    printf("The number of negative elments in array is %d",count);
    
    return 0;
}