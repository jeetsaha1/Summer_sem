//. Sum of all odd frequency elements in an array. 

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int arr[n],visited[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
        visited[i] =0;
    }

    int count =0,sum=0;
    for (int i = 0; i < n; i++)
    {
        if(visited[i])  continue;
        count = 1;
        for (int j = i+1; j <n ; j++)
        {
            if(arr[i] == arr[j]){
                count++;
                visited[j] = 1;
            }
        }
        if(count%2!=0){
            sum+= arr[i];
        }
    }
    printf("%d",sum);
    
    return 0;
}