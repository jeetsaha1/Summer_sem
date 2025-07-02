// Trim trailing white space characters from a given string. 


#include<stdio.h>
#include<string.h>

int main(){
    char str[100],res[100];
    printf("Enter the character: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    int j=strlen(str);

    while (str[j-1] == ' '&&j>0)
    {
        j--;
    }
    
    res[j] ='\0';
    printf("%s",str);
    
    
    return 0;
}