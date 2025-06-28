//Find Smallest and Largest Element 

#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the number of inputs : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("\n");
    printf("The largest element : %d\n",max);
    printf("The smallest element : %d\n",min);
    return 0;
}