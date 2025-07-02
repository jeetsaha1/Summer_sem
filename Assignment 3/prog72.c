//Write a c program to find out sum digits of a number using recursion.

#include<stdio.h>

int sum_of_digit(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n%10)+sum_of_digit(n/10);
    }
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int sum = sum_of_digit(n);
    printf("The sum of digit of %d is %d",n,sum);
    return 0;
}