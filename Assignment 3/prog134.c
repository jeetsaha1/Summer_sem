// Input and print array elements using a pointer. 

#include<stdio.h>

int main(){
    int n;
    printf("Enter the no. of inputs: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",(arr+i));
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(arr+i));
    }
    return 0;
}