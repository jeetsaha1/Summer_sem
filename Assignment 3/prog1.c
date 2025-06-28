//1. 1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17….   find Nth Term.

#include<stdio.h>

int fibbonacci(int val){
    int a = 1,b=1,c;
    int i =3;
    while(i<=val){
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    return b;
}

int isPrime(int n){
    int f=1;
    for (int i = 2; i < n; i++)
    {
        if(n%i == 0){
            f = 0;
            break;
        }   
    }
    return f;
}

int getPrime(int val){
    int count = 0,num = 2;
    while(1){
        if(isPrime(num)){
            count++;
            if(count == val){
                return num;
            }
        }
        num++;
    }
}

int main(){
    int term;
    printf("Enter the number of term: ");
    scanf("%d",&term);
    for (int i = 0; i < term; i++)
    {
        if(i%2 == 0)
            printf("%d ",fibbonacci((i/2)+1));
        else
            printf("%d ",getPrime((i/2)+1));
    }
    
    return 0;
}