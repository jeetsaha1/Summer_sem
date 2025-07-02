// Trim both leading and trailing white space characters from a given string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100],res[100];
    printf("Enter the character: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    int start = 0;
    int end = strlen(str)-1;

    while(str[start]==' '){
        start++;
    }
    while (str[end]==' ')
    {
        end--;
    }
    int j=0;
    for (int i = start; i < end; i++)
    {
        res[j++] = str[i];
    }
    res[j]='\0';
    printf("%s",res);
    return 0;

}