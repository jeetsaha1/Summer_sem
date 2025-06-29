// Write a c program to count the different types of characters’ in given string. 

#include<stdio.h>
#include<string.h>

int main(){
    char str[20],count=0,f;
    printf("Enter the string: ");
    scanf("%s",str);
    int len = strlen(str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        f=1;
        for (int j = 0; j <i; j++)
        {
            if(str[i] == str[j]){
                f=0;
                break;
            }
        }
        if(f==1){
            count++;
        }
    }
    printf("%d",count);   
    
    
    return 0;
}