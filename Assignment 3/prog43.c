// Write a c program to find the length of a string using pointer.

#include<stdio.h>
#include<string.h>

int str_length(char *str){
    int count =0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main(){
    char str[20],count=0,f;
    printf("Enter the string: ");
    scanf("%s",str);
    
    int c= str_length(str);
    printf("%d",c);
    return 0;
}