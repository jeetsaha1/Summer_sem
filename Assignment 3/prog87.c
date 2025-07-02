// Remove spaces from a string. 

#include<stdio.h>
#include<string.h>

int main(){
    char str[100],new[60];
    int j=0;
    printf("Enter the set of characters: ");
    fgets(str,sizeof(str),stdin);
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i]!=' '){
            new[j] = str[i];
            j++;
        }
    }
    new[j+1] ='\0';
    printf("%s",new);
    return 0;
}