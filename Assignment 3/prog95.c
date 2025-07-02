//Triplets with a given sum

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

    int target;
    printf("Enter the target: ");
    scanf("%d",&target);

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if(arr[i]+arr[j]+arr[k] == target){
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
            
        }
        
    }
    
    
    return 0;
}