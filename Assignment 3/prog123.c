// Find the last occurrence of a word in a given string.


#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    char sub_str[20];
    printf("Enter the sub string: ");
    scanf("%s",sub_str);

    int str_len = strlen(str);
    int sub_strlen = strlen(sub_str);
    int f = -1;

    for (int i = 0; i < str_len - sub_strlen; i++)
    {
        if (strncmp(&str[i],sub_str,sub_strlen)==0)
        {
            
            f=i;
        }
        
    }
    if(f!=-1)
        printf("The word is  found at index %d",f);
    else
        printf("The word is not found");
    return 0;
}