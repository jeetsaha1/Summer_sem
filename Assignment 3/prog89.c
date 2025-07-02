//Capitalize the first and last letter of each word of a string.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    printf("Enter the strings :");
    gets(str);
    char ch = toupper(str[0]);
    str[0] = ch;
    char ch_ = toupper(str[strlen(str)-1]);
    str[strlen(str)-1] = ch_;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            char ch1 =  toupper(str[i-1]);
            char ch2 = toupper(str[i+1]);
            str[i-1] = ch1;
            str[i+1] = ch2; 
        }
        
    }
    printf("%s",str);
    return 0;
}