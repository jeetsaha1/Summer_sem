// Print all natural numbers between 1 to n using recursion. 

#include<stdio.h>

void natural_no(int n){
    if(n==0)
        return ;
    else
        natural_no(n-1);
        printf("%d ",n);
}

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    natural_no(num);
    return 0;
}