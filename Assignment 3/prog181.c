// Finding Number of times x digit occurs in a given input.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter a number: ");
    scanf("%s",str);
    int x,i,count=0;
    printf("Enter x: ");
    scanf("%d",&x);
    for ( i = 0; str[i]!='\0'; i++)
    {
        int dig = str[i]-'0';
        if(dig == x){
            count++;
        }
    }
    printf("The element is found %d times.",count);
    return 0;
}