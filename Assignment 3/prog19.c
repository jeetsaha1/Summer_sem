//How to convert string to int without using library functions in c.

#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    printf("Enter the string: ");
    scanf("%s",str);
    int len =strlen(str),sum=0,place=1;
    for (int i = 0; i < len; i++)
    {
        if (str[i]>47 && str[i]<59)
        {
            int n = str[i]-48;
            sum = sum*10 +n;
            
        }
        
    }
    printf("%d",sum);
    
    return 0;
}