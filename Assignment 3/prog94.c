// Missing elements of a range. 


#include<stdio.h>

int main(){
    int n;
    printf("Enter how many elements you want to input: ");
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    int range;
    printf("Enter the upeer limit of the range: ");
    scanf("%d",&range);

    int present[100] = {0};
    for (int k = 0; k < n; k++)
    {
        present[arr[k]] = 1;

    }
    
    for (int l = 1; l <= range; l++)
    {
        if(present[l] == 0){
            printf("%d ",l);
        }
    }
    
    return 0;
}