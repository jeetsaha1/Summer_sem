// Find a total number of alphabets, digits or special character in a string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    int len = strlen(str);
    int alpha=0,digit=0, special_char=0;
    for (int i = 0; i < len; i++)
    {
        if(str[i]<='A'&& str[i]>='Z'){
            alpha++;
        }
        else if(str[i]>='a'&& str[i]<='z'){
            alpha++;
        }
        else if(str[i]>='0'&& str[i]<='9'){
            digit++;
        }
        else{
            special_char++;
        }
    }
    
    printf("Alphabet: %d , Digits: %d , Special Characters: %d",alpha,digit,special_char);
    return 0;
}