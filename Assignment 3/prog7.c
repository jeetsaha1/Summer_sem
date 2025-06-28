// Write a c program to check given number is palindrome number or not.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    printf("Enter the string : ");
    scanf("%s",str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        rev[i] = str[len-i-1];
    }
    rev[len] = '\0';

    if (strcmp(rev,str)==0)
    {
        printf("palindrome");
    }
    else    
        printf("not palindrome");
    
    
    return 0;
}