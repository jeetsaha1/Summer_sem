// Remove the last occurrence of a character from a string. 

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    char ch;
    printf("Enter the character for searching: ");
    scanf(" %c", &ch);

    int f=0,idx=0;
    for (int i = 0; str[i] != 0; i++)
    {
        if(str[i] == ch){
            idx= i;
        }
    }
    for (int j = 0; str[j]!='\0'; j++)
    {
        if(j==idx){
            continue;
        }
        else{
            printf("%c",str[j]);
        }
    }
    
    return 0;

}