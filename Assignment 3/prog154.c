// Find all prime numbers between the given interval using functions. 

#include<stdio.h>

int Prime(int n){
    int f=1;
    for (int i = 2; i <= n; i++)
    {
        f=1;
        for (int j = 2; j <= i/2; j++)
        {
            if((i%j) == 0){
            f=0;
            break;
        }  
        }
    if(f==1){
        printf("%d ",i);
    }      
    }
    
}

int main(){
    int range;
    printf("Enter the range: ");
    scanf("%d",&range);
    Prime(range);
    return 0;
}