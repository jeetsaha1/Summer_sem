// Write a c program to convert decimal number to hexadecimal number. 

#include<stdio.h>

void dec_to_hex(int dec){
    char hex[20];
    int i=0;

    while (dec!=0)
    {
        int rem = dec%16;
        if(rem<10)
           hex[i] = rem+'0';
        else
            hex[i] = rem-10+'A';
        
        dec /=16;
        i++;
    }

    for (int j = i-1; j >=0 ; j--)
    {
        printf("%c",hex[j]);      
    }
    
    
}
int main(){
    int dec;
    printf("Enter the decimal number : ");
    scanf("%d",&dec);
    dec_to_hex(dec);
    return 0;
}