// Write a c program to find out L.C.M. of two numbers. 

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

int LCM(int a, int b){
    return(a*b)/HCF(a,b);
}

int main(){
    int a,b;
    printf("Enter two numbers respesctively: ");
    scanf("%d %d",&a,&b);

    printf("The LCM of %d and %d is %d",a,b,LCM(a,b));
    return 0;
}