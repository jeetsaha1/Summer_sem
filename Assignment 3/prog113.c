// Find lowest frequency character in a string.

#include<stdio.h>
#include<string.h>
#include<limits.h>

int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);

    int freq[256]={0};

    for (int i = 0; str[i]!='\0'; i++)
    {
        freq[str[i]]++;
    }
    
    int min = INT_MAX;
    char min_char = '\0';
    for (int j = 0; j < 256; j++)
    {
        if(min>freq[j] && freq[j]>0){
            min = freq[j];
            min_char = j;
        }
    }
    printf("The lowest frequency character is %c",min_char);
    return 0;
}