// Find reverse of a string using pointers.

#include<stdio.h>
#include<string.h>

int reverse(char *str, char *rev){
    int len = strlen(str),i;
    for ( i = 0; i<len; i++)
    {
        *(rev+i) = *(str+(len-i-1));
    }
    rev[len] = '\0';
}
int main(){
    char str[100],rev[100];
    printf("Enter the string: ");
    scanf("%s",str);
    reverse(str,rev);
    printf("The reversed string is :%s",rev);
    return 0;
}