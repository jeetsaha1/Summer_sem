// Count frequency of each character in a string. 

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

    for (int j = 0; j < 256; j++)
    {
        if(freq[j]>0){
            printf("%c : %d\n",j,freq[j]);
        }
    }
    
    
    return 0;
}