//Count the number of vowels. 

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[20];
    printf("Enter the string: ");
    scanf("%s",str);
    int len = strlen(str);
    int count=0;
    for (int i = 0; i < len; i++)
    {
        char ch = tolower(str[i]);
        if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'){
            count++;
        }
    }
    printf("The no. of vowels in the string is: %d",count);
    return 0;
}