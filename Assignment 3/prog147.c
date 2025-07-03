// Sort array using pointers.

#include<stdio.h>
void bubble_sort(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if( *(arr+j) > *(arr+j+1) ){
                int t = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = t;
            }
        }
        
    }
    
}
int main(){
    int n;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",(arr+i));
    }

    bubble_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(arr+i));
    }
    
    return 0;
}