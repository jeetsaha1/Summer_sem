// Find maximum and minimum elements in an array using recursion.


#include<stdio.h>

int max(int a, int b){
    return (a>b)?a:b;
}

int get_max(int arr[],int n){
    int max_rest;
    if(n==1)
        return arr[0];
    else
         max_rest = get_max(arr+1, n-1);
         return(max(arr[0],max_rest));

}

int min(int a, int b){
    return (a<b)?a:b;
}

int get_min(int arr[],int n){
    int min_rest;
    if(n==1)
        return arr[0];
    else
         min_rest = get_min(arr+1, n-1);
         return(min(arr[0],min_rest));

}

int main(){
    
    int n;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
        
    }
    printf("The maximum element is %d",get_max(arr,n));
    printf("The mimimum element is %d",get_min(arr,n));
    return 0;
}