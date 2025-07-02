// Replace the last occurrence of a character with another in a string. 

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    char ch;
    printf("Enter the character for searching: ");
    scanf(" %c", &ch);

    char ch1;
    printf("Enter the character for replacing: ");
    scanf(" %c", &ch1);

    int f=0,idx=0;
    for (int i = 0; str[i] != 0; i++)
    {
        if(str[i] == ch){
            idx= i;
        }
    }
    str[idx] = ch1;
    printf("%s",str);
    
    return 0;

}