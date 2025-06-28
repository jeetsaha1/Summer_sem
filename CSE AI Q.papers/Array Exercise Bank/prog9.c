// Find the Maximum Subarray Sum 
// Write a C program to find the maximum sum of a contiguous subarray within a one
// dimensional array of numbers. Implement Kadane's Algorithm. 

#include<stdio.h>
#include<limits.h>

int max(int a, int b){
    return (a>b)?a:b;
}

int max_subarr_sum(int arr[], int n){
    int max_so_far =INT_MIN;
    int current_max = 0;

    for (int i = 0; i < n; i++)
    {
        current_max = current_max + arr[i];
        if(current_max > n){
            max_so_far = current_max;
        }
        if(current_max<0){
            current_max = 0;
        }
    }

    if (max_so_far == INT_MIN && n>0)
    {
        max_so_far = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i]>max_so_far)
            {
                max_so_far = arr[i];
            }
            
        }
        
    }
     else if (n == 0) { 
        return 0; }
    return max_so_far;
    
}

int main(){
    int n, i; 
printf("Enter the number of elements: "); 
scanf("%d", &n); 
int arr[n]; 
printf("Enter %d integers:\n", n); 
for (i = 0; i < n; i++) { 
scanf("%d", &arr[i]); 
} 
int max_sum = max_subarr_sum(arr, n); 
printf("Maximum contiguous subarray sum: %d\n", max_sum);
    return 0;
}