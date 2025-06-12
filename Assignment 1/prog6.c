//Program to Find Prime Numbers in a Given Range Using Nested Loops.

#include<stdio.h>

int main(){
    int range,f;
    printf("Enter the range :");
    scanf("%d",&range);

    for (int i = 2; i <= range; i++)
    {
        f=1;
        for (int j = 2; j < i; j++)
        {
            if(i%j== 0)
                f = 0;
        }
        if(f==1){
            printf("%d ",i);
        }
    }
    
    
    return 0;
}

//Output 

// Enter the range :10
// 2 3 5 7 