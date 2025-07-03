// Find lcm of two numbers using recursion. 

#include<stdio.h>

int GCD(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b, a%b);
    }
}

int LCM(int a, int b){

    return (a*b)/GCD(a,b);
}

int main(){
    int a,b;
    printf("Enter two numbers respectively: ");
    scanf("%d %d",&a,&b);
    int lcm = LCM(a,b);
    printf("The LCM of the two numbers is : %d",lcm);
    return 0;
}