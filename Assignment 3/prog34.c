//Write a c program to convert binary number to octal number.

#include<stdio.h>
#include<math.h>

int bin_to_dec(int bin){
    int dec=0,i=0;
    while (bin>0)
    {
        int rem = bin%10;
        dec+= (rem*pow(2,i));
        i++;
        bin /= 10;
    }
    return dec;
}



int main(){
    int bin,temp,i=0;
    printf("Enter binary no.: ");
    scanf("%d",&bin);
    int dec = bin_to_dec(bin);
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