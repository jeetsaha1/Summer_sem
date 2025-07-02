// Write a c program to find factorial of a number using recursion. 

#include<stdio.h>

int factorial(int n){
    if(n == 0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int fac = factorial(n);
    printf("The factorial of %d is %d",n,fac);
    return 0;
}