//Count Element Occurrences

#include<stdio.h>

int main(){
    int n,count =0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    int ele;
    printf("Enter the number for counting occurrences: ");
    scanf("%d",&ele);

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == ele){
            count++;
        }
    }

    printf("The number of occurences of %d is %d",ele,count);
    

    return 0;
}