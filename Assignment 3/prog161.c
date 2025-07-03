// Sum of all natural numbers between 1 to n using recursion. 

#include<stdio.h>

int sum(int n){
    int i,s=0;
    for ( i = 1; i <= n; i++)
    {
        s+= i;
    }
    return s;
}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The sum 0f 1 to %d is %d",n,sum(n));
    return 0;
}