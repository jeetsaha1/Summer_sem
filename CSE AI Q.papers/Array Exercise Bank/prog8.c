//Find Pair with Given Sum in a Sorted Array (Two Pointers) 

#include<stdio.h>

int find_pair_with_sum(int arr[],int target_Val, int num){
    int start = 0;
    int end = num-1;
    int sum = 0;
    while (start<end)
    {
        sum = arr[start] + arr[end];
        if(sum == target_Val){
            printf("The pair is found, (%d, %d)",arr[start],arr[end]);
            return 1;
        }
        else if(sum< target_Val){
            start++;
        }
        else{
            end--;
        }
    }
    return 0;
    
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

    int target_value;
    printf("Enter the number for targetting : ");
    scanf("%d",&target_value);
    if(find_pair_with_sum(arr,target_value,n) == 1){
        printf("The pair is found");
    }
    else{
        printf("The pair is not found");
    }
    
    return 0;
}