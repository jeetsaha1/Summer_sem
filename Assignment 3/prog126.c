// Remove the first occurrence of a word from string.


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
    int f = 0;

    for (int i = 0; i <= str_len - sub_strlen; i++)
    {
        if (strncmp(&str[i],sub_str,sub_strlen)==0)
        {
            for (int j = i; str[j]!='\0'; j++)
            {
                str[j] = str[j+sub_strlen];
            }
            break;
            
        }
        
    }
    for (int i = 0; str[i] !='\0' ; i++)
    {
        printf("%c",str[i]);
    }
    
}