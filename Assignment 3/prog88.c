//Calculate the sum of numbers in a string. 

#include<stdio.h>
#include<string.h>

int main(){
    char num[20];
    int sum=0;

    printf("Enter the numbers as string: ");
    scanf("%s",num);

    for (int i = 0; i < strlen(num); i++)
    {
        if(num[i]>='0' && num[i]<='9'){
            int n = num[i]-'0';
            sum += n;
        }
    }
    printf("%d",sum);
    return 0;
}