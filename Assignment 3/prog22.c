// Program to find largest of n numbers in c. 

#include<stdio.h>
#include<limits.h>

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

    int max =INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
     
    printf("The maximum element of the array is %d ",max);
    

    return 0;
}