//0,0,2,1,4,2,6,3,8,4,10,5,12,6,14,7,16, 8... find Nth Term. 

#include<stdio.h>

int even(int val){
    return val;
}

int natural_num(int val){
    return val/2;
}

int main(){
    int term;
    printf("Enter the number of term :");
    scanf("%d",&term);

    for (int i = 0; i < term; i++)
    {
        if(i%2 ==0){
            printf("%d ",even(i));
        }
        else{
            printf("%d ",natural_num(i));
        }
    }
    
    return 0;
}