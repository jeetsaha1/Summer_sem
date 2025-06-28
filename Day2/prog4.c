// Implement a program to print prime number between range.

#include<stdio.h>

void Prime(int upper, int lower){
    int f;
    for (int i = lower; i < upper; i++)
    {
        f=1;
        for (int j = 2; j < i/2; j++)
        {
            if (i%j == 0)
            {
                f =0;
                break;
            }
            
        }
        if(f==1){
            printf("%d ",i);
        }
    
        
    }
    
}

int main(){
    int lower,upper;
    printf("Enter the upper value:");
    scanf("%d",&upper);
    printf("Enter the lower value:");
    scanf("%d",&lower);
    Prime(upper,lower);
    return 0;
}