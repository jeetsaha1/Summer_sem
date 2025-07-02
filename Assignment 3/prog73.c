// Write a c program to find power of a number using function recursion.

#include<stdio.h>

int power(int base, int exp){
    if(exp==0){
        return 1;
    }
    else{
        return base*power(base,exp-1);
    }
}

int main(){
    int base,exp;
    printf("Enter base and exponential respectively : ");
    scanf("%d %d",&base, &exp);
    int res = power(base,exp);
    printf("The reult is %d",res);
    return 0;
}