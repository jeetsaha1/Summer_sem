// Find gcd (HCF) of two numbers using recursion.


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
    int a,b;
    printf("Enter two numbers respectively: ");
    scanf("%d %d",&a,&b);
    int gcd = GCD(a,b);
    printf("The GCD of the two numbers is : %d",gcd);
    return 0;
}