//Number of times digit 3 occurs in each and every number from 0 to n. 


#include<stdio.h>

int searching_3(int val){
    if(val ==3)
        return 1;
    else{
        while(val!=0){
            int r = val%10;
            if(r==3){
                return 1;
            }
            val /=10;
        }
    }
    
}

int main(){
    int n,count=0,temp=0;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        temp = searching_3(arr[j]);
        if(temp ==1){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}