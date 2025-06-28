// Given an integer n, perform the following conditional actions, 
// If n is odd, print weird, 
// If n is even and in the inclusive range of 2 to 5, print not weird, 
// If n is even and in the inclusive range 6 to 20, print weird, 
// If n is even and greater than 20, print not weird. 
// Input Format 
// An integer value from the user. 
// Constraints 
// 1<=n<=100 
// Output Format 
// Weird or Not Weird

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);

    if(num%2 == 0){
        if(num<= 5 && num >=2){
            printf("Not wierd");
        }
        else if(num<=20 && num >=6){
            printf("Wierd");
        }
        else if (num>20)
        {
            printf("Not wierd");
        }
    }
    else{
        printf("wierd");
    }
    return 0;
}