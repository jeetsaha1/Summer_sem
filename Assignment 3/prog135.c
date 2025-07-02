// Copy one array to another using pointer. 

#include<stdio.h>

int main(){
    int n;
    printf("Enter the no. of inputs: ");
    scanf("%d",&n);
    int arr[n],cpy[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",(arr+i));
    }

    printf("Main array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(arr+i));
    }

    printf("\n");

    int *p = cpy;
    for (int i = 0; i < n; i++)
    {
        *(p+i) = arr[i];
    }

    printf("Copied array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(cpy+i));
    }
    
    return 0;
}