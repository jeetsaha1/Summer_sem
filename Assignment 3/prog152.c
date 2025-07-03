//Check whether a number is even or odd using functions.

#include<stdio.h>

void check_even_odd(int num){
    if(num%2==0)
        printf("%d is even",num);
    else
        printf("%d is odd",num);
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    check_even_odd(num);
    return 0;
}