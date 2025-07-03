// Check String Is Palindrome or Not Using for Loop. 

#include<stdio.h>
#include<string.h>

int main(){
    char str[100],rev[100];
    printf("Enter the string: ");
    scanf("%s",str);
    int len = strlen(str),f;
    for (int i = 0; i<len; i++)
    {
        if(str[i] == str[len-i-1]){
            f=1;
        }
        else{
            f=0;
            break;
        }
    }
    if(f)
        printf("paindrome");
    else
        printf("Not palindrome");
    rev[len]='\0';
    
    
    return 0;
}