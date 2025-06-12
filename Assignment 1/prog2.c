//Program to Swap Two Numbers Without Using a Temporary Variable (Using XOR Operator).

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the two numbers by giving space : ");
    scanf("%d %d",&a,&b);

    a = a ^ b;
    b = a^ b;
    a = a ^ b;
    printf("The swapped numbers are : %d %d",a,b);
    return 0;
}

//Output

// Enter the two numbers by giving space : 2 3
// The swapped numbers are : 3 2