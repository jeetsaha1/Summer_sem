// Write a c program to check given number is palindrome number or not.

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    int temp = num;
    int sum =0;
    while(temp>0){
        int r = temp%10;
        sum = sum*10 + r;
        temp /= 10;
    }

    if(sum == num){
        printf("palindrome");
    }
    else
        printf("Not palindrome");
    return 0;
}