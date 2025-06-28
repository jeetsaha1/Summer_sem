//Write a c program to find out power of number. 

#include<stdio.h>

int main(){
    int base,exp;
    printf("Enter the base and its exponent:");
    scanf("%d %d",&base,&exp);
    int res =1;
    for (int i = 0; i < exp; i++)
    {
        res = res*base;
    }
    printf("%d",res);
    return 0;
}