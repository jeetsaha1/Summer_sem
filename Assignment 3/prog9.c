//Write a c program to print Fibonacci series of given range.

#include<stdio.h>

void fibbonacci(int n){
    int a =0, b=1,i=0,c;
    printf("%d %d ",a,b);
    while(i<=n){
        c = a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i++;
    }
}

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    fibbonacci(num);
}