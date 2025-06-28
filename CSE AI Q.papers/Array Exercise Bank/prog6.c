//Find the Second Largest Element in an Array

#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    int max= INT_MIN;
    int second_max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            second_max = max;
            max= arr[i];
        }
        else if(arr[i]>second_max && arr[i]< max){
            second_max = arr[i];
        }
    }
    printf("The second largest element is %d ",second_max);
    

    return 0;
}