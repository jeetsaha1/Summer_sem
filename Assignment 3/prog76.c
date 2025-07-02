// Write a c program for binary search

#include<stdio.h>

int main(){
    int low, high, p, f=0,n,i, key;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter the number for searching: ");
    scanf("%d",&key);

    low = 0, high =n;
    while(low<high){
        int mid = (low+high)/2;
        if(arr[mid]<key){
            low = mid+1;
        }
        else if(arr[mid]>key){
            high = mid-1;
        }
        else{
            p=mid;
            f=1;
            break;
        }
    }
    if(f==1){
        printf("The element is found at %d",p);
    }
    return 0;
}