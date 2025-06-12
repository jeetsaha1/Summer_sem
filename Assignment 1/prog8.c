//Program to Print Fibonacci Sequence Using a Loop.

#include<stdio.h>

void fibbonacci(int num){
    int a = 0;
    int b = 1;
    
    for (int i = 0; i < num; i++)
    {
        printf("%d ",a );
        int c = a+b;
        a=b;
        b=c;

    }
    
}

int main(){                                             
    int range;
    printf("Enter the range : ");
    scanf("%d",&range);

    fibbonacci(range);
    
    return 0;
}


//Output

// Enter the range : 10
// 0 1 1 2 3 5 8 13 21 34