//. Find the first occurrence of a character in a given string. 

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    char ch;
    printf("Enter the character for searching: ");
    scanf(" %c", &ch);

    int f=0;
    for (int i = 0; str[i] != 0; i++)
    {
        if(str[i] == ch){
            printf("The character is found at index %d",i);
            f=1;
            break;
        }
    }
    if(!f)
        printf("Character is not found");
}