// Write a c program to swap two numbers without using third variable.

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter a and b respectively: ");
    scanf("%d %d",&a,&b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("a: %d , b: %d",a,b);
    return 0;
}