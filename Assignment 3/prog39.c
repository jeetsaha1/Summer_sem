// Write a c program to convert the string from lower case to upper case.


#include<stdio.h>
#include<string.h>

int main(){
    char str[20],new[20];
    printf("Enter the string in upper csae: ");
    scanf("%s",str);
    int len =strlen(str);
    for (int i = 0; i < len; i++)
    {
        char temp = str[i];
        if(temp>='a' && temp<='z'){
            new[i] = temp - 32;
        }
    }
    new[len] = '\0';
    printf("%s",new);
    return 0;
}