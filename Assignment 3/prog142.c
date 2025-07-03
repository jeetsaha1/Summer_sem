// Find the length of string using pointers.

#include<stdio.h>
#include<string.h>

int str_length(char *str){
    int i,count=0;
    for ( i = 0; str[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    int len = str_length(str);
    printf("The len of the string is :%d",len);
    return 0;
}