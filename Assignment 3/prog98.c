//Array is a subset of another array or not.

#include<stdio.h>

int main(){
    int n1;
    printf("Enter the number of elements of main array: ");
    scanf("%d",&n1);
    int main_arr[n1];

    for (int i = 0; i < n1; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&main_arr[i]);
    }
    

    int n2;
    printf("Enter the number of elements of sub array: ");
    scanf("%d",&n2);
    int sub_arr[n2];

    for (int i = 0; i < n2; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&sub_arr[i]);
    }
    
    int i =0,count=0;
    while(i<=n2){
        for (int k = 0; k < n1; k++)
        {
            if(sub_arr[i] == main_arr[k]){
                count++;
            }
            else{
                continue;
            }
        }
        i++;
        
    }
    if(count == n2){
        printf("The sub array is the subset of the main array");
    }
    else{
        printf("The sub array is not the subset of the main array");
    }
    return 0;
}