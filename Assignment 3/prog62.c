// C program to find largest and smallest number in an array.


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
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(max<arr[i])
            max = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(min>arr[i])
            min = arr[i];
    }
    printf("The largest element : %d",max);
    printf("The smallest element : %d",min);

    
    return 0;
}