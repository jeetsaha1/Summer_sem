//  Find Missing Number in a Sequence 
// Given an array C of N−1 distinct numbers in the range [1,N], find the single missing number. 
// Example: 
// Input: 
// Array: 1,2,4,5,6 
// N=6 (numbers from 1 to 6 should be present) 
// Output: 3

#include<stdio.h>

int main(){
    int n_minus_1;
    printf("Enter the number of elements : ");
    scanf("%d",&n_minus_1);

    int arr[n_minus_1];
    for (int i = 0; i < n_minus_1; i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int n = n_minus_1+1;
    long long expected_total = (long long)n*(n+1)/2;
    long long actual_output =0;
    for (int i = 0; i < n_minus_1; i++)
    {
        actual_output += arr[i];
    }
    int missing = expected_total - actual_output;
    printf("The missing number is %d",missing);

    return 0;
}