// Write a c program to find GCD of a two numbers using recursion. 

#include<stdio.h>

int GCD(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b, a%b);
    }
}

int main(){
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1, &n2);
    int gcd = GCD(n1,n2);
    printf("The GCD is %d",gcd);
    return 0;
}