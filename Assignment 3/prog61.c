//Write a c program for insert an element at desired position in an array. 

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    int num;
    printf("Enter the new element: ");
    scanf("%d",&num);

    int idx;
    printf("Enter the index number for entering element: ");
    scanf("%d",&idx);

    if (idx < 0 || idx > n) {
        printf("Invalid index!\n");
        return 1;
    }

    for (int i = n; i >idx; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[idx] = num;
    n++;

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}