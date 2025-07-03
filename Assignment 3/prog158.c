//Find the power of any number using recursion. 

#include<stdio.h>

int power(int base, int exp){
    if(exp == 0)
        return 0;
    else if(exp == 1)
        return base;
    else    
        return base* power(base, exp-1);
}

int main(){
    int base, exp;
    printf("Enter the base and exponenetial repectively: ");
    scanf("%d %d",&base,&exp);
    printf("The result is :%d",power(base,exp));
    return 0;
}