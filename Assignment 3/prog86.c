// Remove characters in a string except alphabets. 

#include<stdio.h>
#include<string.h>

int main(){
    char str[100],new[60];
    int j=0;
    printf("Enter the set of characters: ");
    scanf("%s",str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]>=65 && str[i]<=90){
            new[j] = str[i];
            j++;
        }
        if(str[i]>=90 && str[i]<=122){
            new[j] = str[i];
            j++;
        }
    }
    new[j+1] = '\0';
    printf("%s",new);
    return 0;
}