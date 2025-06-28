// Write a c program to add two numbers without using addition operator. 

#include<stdio.h>

int add(int a, int b){
     while (b != 0) {
        int carry = a & b;       // Carry is AND of a and b
        a = a ^ b;               // Sum is XOR of a and b
        b = carry << 1;          // Shift carry left by 1
    }
    return a;
}

int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a, &b);
    printf("%d",add(a,b));
    return 0;
}