// Array rotation - Left and right. 

#include<stdio.h>

int main(){
    int n,temp=0;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    //left rotation by first index
    temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    
    for (int j = 0; j < n; j++)
    {
        printf("%d ",arr[j]);
    }

    //right rotation by first index
    temp = arr[n-1];
    for (int i = n-1; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    
    for (int j = 0; j < n; j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}