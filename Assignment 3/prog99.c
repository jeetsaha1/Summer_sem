//Merge two sorted arrays


#include<stdio.h>

int main(){
    int n1;
    printf("Enter the number of elements of sorted array: ");
    scanf("%d",&n1);
    int s1_arr[n1];

    for (int i = 0; i < n1; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&s1_arr[i]);
    }
    

    int n2;
    printf("Enter the number of elements of sorted array: ");
    scanf("%d",&n2);
    int s2_arr[n2];

    for (int i = 0; i < n2; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&s2_arr[i]);
    }

    int new[n1+n2+1],j=0,k=0,i=0;
    
    
    while(j<n1 && k<n2){
        if(s1_arr[j]>s2_arr[k]){
            new[i] = s2_arr[k];
            i++;
            k++;
        }
        else{
            new[i] = s1_arr[j];
            i++;
            j++;
        }
        
    }
    
    while(j<n1){
        new[i++] = s1_arr[j++];
    }

    while(k<n2){
        new[i++] = s2_arr[k++];
    }
    

    for (int i = 0; i < n1+n2; i++)
    {
        printf("%d ",new[i]);
    }
    
    return 0;
}