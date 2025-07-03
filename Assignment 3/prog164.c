// Check whether a number is a palindrome or not using recursion.

#include<stdio.h>

int reverse(int n){
    static int s = 0;
    if(n == 0){
        return s;
    }
    else{
        s =  s*10+(n%10);
         reverse(n/10);
    }
}

int main(){
     int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num == reverse(num))
        printf("palindrome");
    else
        printf("Not palindrome");
    return 0;
}