// Implement a program to calculate sum of digits present in the given 
// number. 
// Input Format 
// A number from the user 
// Constraints 
// Number>0 
// Output Format 
// print sum of digits

#include<stdio.h>

int main(){
    int num,r,i=0;
    printf("Enter the number:");
    scanf("%d",&num);
    int sum = 0;
    while (num!=0)
    {
        r = num%10;
        sum += r;
        num = num/ 10;
        i++;
    }

    printf("The sum of the digit is %d",sum);
    return 0;
}