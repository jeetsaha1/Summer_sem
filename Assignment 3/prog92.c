//Count common subsequence in two strings. 


#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);

    char sub_str[100];  //For storing the subseqence
    int n = strlen(str);
    int total = 1<<n;   //2^n

    for (int mask = 0; mask < total; mask++)
    {
        for (int i = 0; i < n; i++)
        {
            if(mask & (1<<i))
                // sub_str[i] = str[i];
                printf("%c",str[i]);
        }
        printf("\n");
    }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%c\n",sub_str[i]);
    // }
    
    return 0;
}