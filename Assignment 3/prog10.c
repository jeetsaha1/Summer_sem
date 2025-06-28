//Write a c program to get factorial of given number.

#include<stdio.h>
int factorial(int n){
    int f =1;
    for (int i = 1; i <= n; i++)
    {
        f*= i;
    }
    return f;
    
}

int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("%d",factorial(num));
}