//Write a c program to reverse any number using recursion. 

#include<stdio.h>

int reverse(int n){
    static int s =0;
    int r;
    if(n==0)    
        return s;
    else{
        r = n%10;
        s = s*10 + r;
        return reverse(n/10);
        
    }
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int rev = reverse(n);
    printf("The sum of digit of %d is %d",n,rev);
    return 0;
}