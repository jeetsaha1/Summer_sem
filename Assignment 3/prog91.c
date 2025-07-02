//Replace substring in a string. 


#include<stdio.h>
#include<string.h>

int main(){
    char str[100],result[200];
    int pos = -1,i=0,j=0,k=0;

    printf("Enter the sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char old_substr[20];
    printf("Enter new old string for replacing:");
    scanf("%s",old_substr);

    char new_substr[20];
    printf("Enter new sub string :");
    scanf("%s",new_substr);

    int mainlen = strlen(str);
    int oldlen = strlen(old_substr);
    int newlen = strlen(new_substr);

    for (int i = 0; i <= mainlen-oldlen; i++)
    {
        if(strncmp(&str[i],old_substr,oldlen)==0){
            pos = i;
            break;
        }
    }
    
    if(pos==-1){
        printf("substring not found");
        return 0;
    }

    for (int i = 0; i < pos; i++)
    {
        result[k++] = str[i];
    }
    
    for (int  i = 0; i < newlen; i++)
    {
        result[k++] = new_substr[i];
    }

    for (int i = pos + oldlen; i < mainlen; i++) {
        result[k++] = str[i];
    }

    result[k] = '\0';

    printf("The replaced string : %s",result);
    
    return 0;
}