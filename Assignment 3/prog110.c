// Search all occurrences of a character in a given string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    char ch;
    printf("Enter the character for searching: ");
    scanf(" %c", &ch);

    int f=0,idx[30];
    for (int i = 0; str[i] != 0; i++)
    {
        if(str[i] == ch){
            idx[f]= i;
            f++;
        }
    }

    printf("The all occurences of the given character are: \n");

    for (int k = 0; k < f; k++)
    {
        printf("%d ",idx[k]);
    }
    
    
    return 0;

}