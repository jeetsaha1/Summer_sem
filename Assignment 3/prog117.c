// Delete all occurrences of a character from a string. 


#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    char ch;
    printf("Enter the character for searching: ");
    scanf(" %c", &ch);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch){
            continue;
        }
        else{
            printf("%c",str[i]);
        }
    }
    
    
    
    
    
    return 0;

}