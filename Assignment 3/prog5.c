//Write a c program to check given number is perfect number or not. 

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    int sum =0;
    for (int i = 1; i <= num/2; i++)
    {
        if(num%i ==0){
            sum+= i;
        }
    }
    // printf("%d",sum);

    if(sum == num){
        printf("The number is perfect.");
    }
    else    
        printf("The number is not perfect.");
    return 0;
}