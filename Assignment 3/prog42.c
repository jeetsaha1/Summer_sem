// Write a c program to sort the characters of a string. 

#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    printf("Enter the string: ");
    scanf("%s",str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len-i-1; j++)
        {
            if(str[j]>str[j+1]){
                char temp = str[j+1];
                str[j+1] = str[j];
                str[j] = temp;
            }
        }
        
    }

    printf("%s",str);
    return 0;
}