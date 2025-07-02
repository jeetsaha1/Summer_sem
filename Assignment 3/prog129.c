// A Trim leading white space characters from a given string. 


#include<stdio.h>
#include<string.h>

int main(){
    char str[100],res[100];
    printf("Enter the character: ");
    fgets(str,sizeof(str),stdin);
    int j=0;

    while (str[j] == ' ')
    {
        j++;
    }
    
    for (int i = j; str[i] !='\0'; i++)
    {
        printf("%c",str[i]);
    }
    
    return 0;
}