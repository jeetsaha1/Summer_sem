// Remove the first occurrence of a character from a string. 

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
            for (int j = i; str[j]!='\0' ;j++)
            {
                str[j] = str[j+1];
            }
            break;
        }

    }
    printf("%s",str);
}