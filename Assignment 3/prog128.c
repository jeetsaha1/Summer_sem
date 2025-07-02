//Delete all occurrence of a word in a given string. 


#include<stdio.h>
#include<string.h>

int main(){
    char str[100],result[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    char sub_str[20];
    printf("Enter the sub string: ");
    scanf("%s",sub_str);

    int str_len = strlen(str);
    int sub_strlen = strlen(sub_str);
    int f=0 ,idx[10],i=0,j=0;

    while(i<str_len){
        if (strncmp(&str[i],sub_str,sub_strlen)==0)
        {
            
            i+= sub_strlen;
        }else{
            result[j++]=str[i++];
        }
            
        
    }
    result[j] ='\0';
    printf("%s",result);
  
    
    
    
    
    return 0;
}