// Armstrong numbers between the given interval using functions. 


#include<stdio.h>

int power(int n){
    int count = 0;
    while (n> 0)
    {
        n=n/10;
        count ++;
    }
    return count;
}

int armstrong(int n){
    int sum = 0;
    int len = power(n);
    int temp =n;
    while(temp>0){
        int r = temp%10;
        int item =1;
        for (int i = 0; i < len; i++)
        {
            item = item * r;   
        }
        
        sum += item;
        temp /= 10;
    }
    return sum;
}

int main(){
    int lower,upper;
    printf("Enter the lower and the uppper no. number repectively :");
    scanf("%d %d",&lower, &upper);
    for (int i = lower; i<=upper; i++)
    {
        if(i == armstrong(i)){
            printf("%d ",i);
        }
    }
    return 0;
}