// Reverse an array using pointers. 


#include<stdio.h>

int main(){
    //The first array
    int n,i;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    int arr1[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr1[i]);
    }

    int *start = &arr1[0];
    int *end = &arr1[n-1];
    int temp;
    while (start<end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(arr1+i));
    }
    
    
    return 0;
}
