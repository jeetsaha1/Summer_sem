//Swap two arrays using pointers. 

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
    printf("\n\n");
    //The second array
    //printf("Enter the no. of elements: ");
    // scanf("%d",&n);
    int arr2[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr2[i]);
    }
    int *p1 = arr1;
    int *p2 = arr2;
    int *temp = p1;
    p1 = p2;
    p2 = temp;

    printf("swapped arrays:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(p1+i));
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(p2+i));
    }
    
    
    return 0;
}