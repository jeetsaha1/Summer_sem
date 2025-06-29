// Write a c program to delete the all consonants from given string. 

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[20],new[10],j=0;
    printf("Enter the string: ");
    scanf("%s",str);
    for (int i = 0; i < strlen(str); i++)
    {
        char ch = tolower(str[i]);
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            new[j] = str[i];
            j++;
        }
        else{
            continue;
        }
    }
    new[j+1] = '\0';
    printf("%s",new);
    return 0;
}