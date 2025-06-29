// Write a c program to find out H.C.F. of two numbers. 

#include<stdio.h>

int HCF(int a,int b){
    while (b!=0)
    {
        int temp = b;
        b = a % b;
        a = temp; 
    }
    return a;
}


int main(){
    int a,b;
    printf("Enter two numbers respesctively: ");
    scanf("%d %d",&a,&b);

    printf("The HCF of %d and %d is %d",a,b,HCF(a,b));
    return 0;
}
