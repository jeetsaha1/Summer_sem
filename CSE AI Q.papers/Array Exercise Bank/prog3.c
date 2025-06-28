// Sum of Even Numbers in an Array

#include<stdio.h>

int main(){
    int n,even=0;
    printf("Enter the number of inputs :");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(i%2 == 0){
            even += i;
        }
    }
    printf("The sum of even numbers of the array: %d",even);
    return 0;
}