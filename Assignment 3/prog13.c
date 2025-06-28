// Write a c program to reverse any number. 

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int new = 0;
    while (num>0)
    {
        int r = num%10;
        new = new*10 + r;
        num = num/10;
    }
    printf("%d",new);
    
    return 0;
}