//Write a c program for linear search. 

#include<stdio.h>

int main(){
    int n,i,ele,j,f=0;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number for searching: ");
    scanf("%d",&ele);

    for ( j = 0; j < n; j++)
    {
        
        if(arr[j] == ele){
           f=1;
        }
        
    }
    
    if(f==1){
        printf("the element is found");
    }
    
    return 0;
}