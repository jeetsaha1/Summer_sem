//Remove vowels from a string.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);

    int j=0;

    for (int i = 0; str[i]!='\0'; i++)
    {
        char ch = tolower(str[i]);
        if(ch != 'a'&&ch != 'e'&&ch != 'i'&&ch != 'o'&&ch != 'u'){
            str[j++] = str[i];
            
        }
    }
    str[j]='\0';

    printf("The new string is: %s",str);
    return 0;
}