// Find highest frequency character in a string. 

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);

    int freq[256]={0};

    for (int i = 0; str[i]!='\0'; i++)
    {
        freq[str[i]]++;
    }
    
    int max =0;
    char max_char;
    for (int j = 0; j < 256; j++)
    {
        if(max<freq[j]){
            max = freq[j];
            max_char = j;
        }
    }
    printf("The highest frequency character is %c",max_char);
    return 0;
}