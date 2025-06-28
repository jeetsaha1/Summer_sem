// Implement a program to check prime or not.

#include<stdio.h>

int isPrime(int n){
    int f;
    for (int i = 2; i < n; i++)
    {
        f=1;
        {
            if(n%i == 0){
                f = 0;
                break;
            }
        }
        
    }
    return f;
    
}

int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    if(isPrime(num) == 1){
        printf("The number is prime");
    }
    else{
        printf("The number is not prime");
    }
    return 0;
}