//  Compare two strings using pointers. 

#include<stdio.h>
#include<string.h>

void str_compare(char *str1, char * str2){
    int f =1;
    for (int i = 0; str1[i]!='\0', str2[i]!='\0'; i++)
    {
        if(*(str1+i) != *(str2+i)){
            f=0;
            break;
        }
    }
    if(f)
        printf("Both strings are same");
    else
        printf("Strings are not same");
}
int main(){
    char str1[100],str2[100];
    printf("Enter the string: ");
    scanf("%s",str1);
    printf("Enter the string: ");
    scanf("%s",str2);
    str_compare(str1,str2);
    return 0;
}