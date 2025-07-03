//Concatenate two strings using pointers. 

#include<stdio.h>
#include<string.h>

void str_concat(char *str1, char * str2, char *concat){
    int k=0;
    for (int i = 0; str1[i]!='\0'; i++)
    {
        *(concat+k) = *(str1+i);
        k++; 
    }
     for (int i = 0; str2[i]!='\0'; i++)
    {
        *(concat+k) = *(str2+i);
        k++; 
    }
    concat[k] = '\0';
}
int main(){
    char str1[100],str2[100],concat[100];
    printf("Enter the string: ");
    scanf("%s",str1);
    printf("Enter the string: ");
    scanf("%s",str2);
    str_concat(str1,str2,concat);
    printf("The concated string is :%s",concat);
    return 0;
}