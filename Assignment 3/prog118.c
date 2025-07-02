// Remove all repeated characters from a given string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    int len = strlen(str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        for (int j = i+1; str[j]!='\0'; j++)
        {
            if(str[i] == str[j]){
                for (int l = j; str[l]!='\0'; l++)
                {
                    str[l] = str[l+1];
                }
                
            }
            else{
                j++;
            }
        }
        
    }

    printf("%s",str);
    return 0;
}