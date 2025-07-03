//. Search an element in an array using pointers

#include<stdio.h>

int main(){
    //The first array
    int n,i;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    int ele,f=0;
    printf("Enter the element for searching: ");
    scanf("%d",&ele);

    int *p = arr;
    int l;
    for ( i = 0; i < n; i++)
    {
        if(*(p+i) == ele){
            f=1;
            l=i;
            break;
        }
    }
    
    if(f){
        printf("The ele is found at index %d",i);
    }
    else{
        printf("The element is not found");
    }

    return 0;
}
