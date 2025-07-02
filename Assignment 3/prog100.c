// Longest subarray having an average greater than or equal to k. 

#include<stdio.h>

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

    int k;
    printf("Enter the target: ");
    scanf("%d",&k);
    int sum =0,len=0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        len++;
        if(sum >=(len*k)){
            printf("True");
            break;
        }
    }
    
    
    
    return 0;
}