// Finding the Longest Palindrome in an Array. 


#include<stdio.h>
#include<string.h>
#include<limits.h>
int isPalindrome(char *str){
    int i=0;
    int j = strlen(str)-1;
    while (i<j)
    {
        if(str[i] != str[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main(){
    //Entering the no. of inputs
    int n;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);

    //Initialize the string array
    char str[n][100];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the string: ");
        scanf("%s",str[i]);
    }
    char max_str[20];
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(isPalindrome(str[i])){
            int len = strlen(str[i]);
            if(len>max){
                max= len;
                strcpy(max_str,str[i]);
            }
        }
    }
    printf("%s",max_str);
    
    return 0;
}