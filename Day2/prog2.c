// Implement a program to calculate sum of odd digits present in the given 
// number. 
// Input Format 
// A number from the user 
// Constraints 
// Number>0 
// Output Format 
// Print sum of odd digits

#include<stdio.h>

int main(){
    int num,r,i=0;
    printf("Enter the number:");
    scanf("%d",&num);
    int sum = 0;
    while (num!=0)
    {
        r = num%10;
        if(r%2 !=0)
            sum += r;
        num = num/ 10;
        i++;
    }

    printf("The sum of the odd digit is %d",sum);
    return 0;
}