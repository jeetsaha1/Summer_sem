// Write a c program to convert decimal number to binary number. 

#include<stdio.h>

int main(){
    int dec,i=0,temp;
    printf("Enter the decimal number : ");
    scanf("%d",&dec);
    int bin[20];

    if(dec == 0){
        printf("0");
        return 0;
    }
    
    while (dec>0)
    {
        temp = dec%2;
        bin[i] = temp;
        dec = dec/2;
        i++;
    }

    for (int j = i-1; j >= 0; j--)
    {
        printf("%d",bin[j]);
        
    }
    

    
    return 0;
}