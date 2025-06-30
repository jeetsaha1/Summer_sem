//Write a c program to reverse a string. 

#include<stdio.h>
#include<string.h>

int main(){
    char str[30],rev[30];
    printf("Enter the string :");
    gets(str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        rev[i] = str[len-i-1];
    }
    rev[len] = '\0';
    puts(rev);
    
    return 0;
}