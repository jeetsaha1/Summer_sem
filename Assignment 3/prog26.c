// Write a c program to convert decimal number to octal number. 

#include<stdio.h>

int main(){
    int dec,i=0,temp;
    printf("Enter the decimal number : ");
    scanf("%d",&dec);
    int octal[20];

    if(dec == 0){
        printf("0");
        return 0;
    }
    
    while (dec>0)
    {
        temp = dec%8;
        octal[i] = temp;
        dec = dec/8;
        i++;
    }
    printf("The octal number : ");
    for (int j = i-1; j >= 0; j--)
    {
        printf("%d",octal[j]);
        
    }
    return 0;
}