//. Put even and odd elements of an array in two separate arrays. 

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the ele %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int even[10],odd[10],ev=0,od=0;
    for (int j = 0; j < n; j++)
    {
        if(arr[j]%2==0){
            even[ev] = arr[j];
            ev++;
        }
        else{
            odd[od] = arr[j];
            od++;
        }
    }
    
    printf("The even numbers: ");
    for (int k = 0; k < ev; k++)
    {
        printf("%d ",even[k]);
    }
    printf("\n");
    printf("The odd numbers: ");
    for (int l = 0; l < od; l++)
    {
        printf("%d ",odd[l]);
    }
    
    
    return 0;
}