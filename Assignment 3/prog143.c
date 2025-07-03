// In short How to Copy one string to another using pointer.

#include<stdio.h>
#include<string.h>

void str_cpy(char *str, char * cpy){
    int i,count=0;
    for ( i = 0; str[i]!='\0'; i++)
    {
        *(cpy+i) = *(str+i);
    }
    cpy[i] = '\0';
}
int main(){
    char str[100],cpy[100];
    printf("Enter the string: ");
    scanf("%s",str);
    str_cpy(str,cpy);
    printf("The copied string is :%s",cpy);
    return 0;
}