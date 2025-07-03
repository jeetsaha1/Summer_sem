//Find the sum of digits of a given number using recursion. 


#include<stdio.h>

int sum_of_digit(int n){
    if(n==0)
        return 0;
    else    
        return (n%10)+sum_of_digit(n/10);
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int res = sum_of_digit(n);
    printf("The sum of the digit is: %d",res);
    return 0;
}