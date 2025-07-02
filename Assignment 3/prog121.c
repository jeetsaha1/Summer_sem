// Put all occurrences of a character with another in a string. 


#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    char ch;
    printf("Enter the character for replacing: ");
    scanf(" %c", &ch);

    char ch1;
    printf("Enter the character for inserting: ");
    scanf(" %c", &ch1);

    int i =0;
    for(i = 0 ; str[i] != '\0'; i++ ){
        if(str[i] == ch){
            str[i] = ch1;
        }
    }
    printf("%s",str);
    return 0;
}