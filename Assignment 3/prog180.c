// Given a maximum of 100 digit numbers as input, find the difference between the sum 
// of odd and even position digits. 

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter the number: ");
    scanf("%s",str);
    int i,even=0,odd=0;
    for ( i = 0; str[i]!='\0'; i++)
    {
        int dig = str[i]-'0';
        if(i%2==0)
            even +=dig;
        else
            odd +=dig;
    }
    printf("The sum of the even position is %d",even);
    printf("The sum of the odd position is %d",odd);
    return 0;
}