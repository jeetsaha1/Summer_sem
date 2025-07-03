// Print all strong numbers between the given interval using functions. 

#include<stdio.h>

int factorial(int n){
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f*i;
    }
    return f;
    
}

int isStrong(int val){
    int temp =val;
    int s= 0;
    while (val!=0)
    {
        int r = factorial(val%10);
        s += r;
        val /=10;
    }
    if(temp == s){
        return 1;
    }
    else
        return 0;
}

int main(){
    int lower,upper;
    printf("Enter the lower and the uppper no. number repectively :");
    scanf("%d %d",&lower, &upper);
    for (int i = lower; i<=upper; i++)
    {
        if(isStrong(i)){
            printf("%d ",i);
        }
    }
    

    return 0;
}