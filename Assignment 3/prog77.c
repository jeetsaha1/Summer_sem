//Write a c program for binary search using recursion. 


#include<stdio.h>

int binarySearch(int arr[],int low, int high, int key){
    
    if(low<high){
        int mid = (low+high)/2;
        if(arr[mid]<key){
            return binarySearch(arr,mid+1,high,key);
        }
        if(arr[mid]>key){
            return binarySearch(arr,low,mid-1,key);
        }
        else{
            return mid;
        }
    }
    else{
        return -1;
    }
}

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

    int index = binarySearch(arr,0,n,key)==1;
    if(index!=-1){
        printf("The element is found at index %d",index);
    }
    else{
        printf("The element is not found");
    }
    return 0;
}