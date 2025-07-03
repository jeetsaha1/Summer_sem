// Print all even or odd numbers in given range using recursion.

#include<stdio.h>

void even(int n){
    if(n<=0)
        return ;
    if(n%2==0){
        even(n-1);
        printf("%d ",n);
    }
    else{
        even(n-1);
    }
}

void odd(int n){
    if(n<=0)
        return ;
    if(n%2!=0){
        odd(n-1);
        printf("%d ",n);
    }
    else{
        odd(n-1);
    }
    
}


int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    even(num);
    printf("\n\n");
    odd(num);
    return 0;
}