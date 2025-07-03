// Find factorial of any number using recursion. 


#include<stdio.h>

int factorial(int n){
    if(n==0 || n==1)
        return 1;
    else    
        return n*factorial(n-1);
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int res = factorial(n);
    printf("The factorial of the number is: %d",res);
    return 0;
}