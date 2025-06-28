//  Implement a program to check whether the given number is even number 
// or odd number. 
// Input Format 
// An integer value 
// Constraints 
// n>=0 
// Output Format 
// even or odd or invalida

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("%d is even.",num);
    }
    else{
        printf("%d is odd.",num);
    }
    return 0;
}