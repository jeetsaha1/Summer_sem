// Write a c program to convert hexadecimal number to octal number. 


#include<stdio.h>
#include<string.h>
#include<math.h>
int hex_to_dec(char hex){
    if(hex>='0' && hex<='9'){
        return hex-'0';
    }
    else if(hex>='A' && hex<='F'){
        return hex+10-'A';
    }
    else
        return -1;
}

int main(){
    char hex[20];
    printf("Enter hexa decimal value:");
    scanf("%s",hex);
    int len = strlen(hex);
    int decimal =0 ;
    for (int i = 0; i < len; i++)
    {
        int dec = hex_to_dec(hex[len-i-1]);
        decimal +=(dec*pow(16,i));
    }
    // printf("%d",decimal);
    int octal[20],i=0;

    if (decimal == 0)
    {
        printf("0");
        return 0;
    }
    
    while(decimal>0){
        int rem = decimal%8;
        octal[i] = rem;
        i++;
        decimal /= 8;
    }
     printf("The octal number : ");
    for (int j = i-1; j >= 0; j--)
    {
        printf("%d",octal[j]);
        
    }
    return 0;
}