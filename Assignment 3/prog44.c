//Write a c program which prints initial of any name.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter your name :");
    gets(str);
    char init[50];
    init[0] = str[0];
    int len = strlen(str);
    int count=1;
    for (int i = 1; i < len; i++)
    {
        if(str[i] == ' '){
            init[count] = str[i+1];
            count++;
        }
        else{
            continue;
        }
    }

    init[count] = '\0';
    printf("%s",init);

    
    return 0;
}