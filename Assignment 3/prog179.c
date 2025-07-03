// Convert All Input String Simultaneously into Asterisk (*). 

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        str[i] = '*';
    }
    
    printf("%s",str);
    return 0;
}