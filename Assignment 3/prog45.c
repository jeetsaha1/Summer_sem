// Write a c program to print the string from given character. 

#include<stdio.h>
#include<string.h>

int main(){
    char str[30],ch;
    printf("Enter the string :");
    gets(str);
    printf("Enter the character for printing from it: ");
    scanf("%c",&ch);

    //Find the index of ch
    int count = 1;
    int len = strlen(str);
    for (int i = 0; str[i]!=ch; i++)
    {
        count++;
    }
    
    // printf("%d",count);

    for (int j = count; j < len; j++)
    {
        printf("%c",str[j]);
    }
    

    return 0;
}