// Search all occurrences of a word in a given string.



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
    int f=0 ,idx[10];

    for (int i = 0; i < str_len - sub_strlen; i++)
    {
        if (strncmp(&str[i],sub_str,sub_strlen)==0)
        {
            
            idx[f]=i;
            f++;
        }
        
    }
    if(f==0){
        printf("The word is not found");
    }
    for (int k = 0; k < f; k++)
    {
        printf("The word is  found at index %d\n",idx[k]);
    }
    
    
    
    return 0;
}