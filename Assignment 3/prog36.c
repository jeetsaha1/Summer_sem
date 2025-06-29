//Write a c program to convert binary number to hexadecimal number. 


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
    int bin,temp,i=0;
    printf("Enter binary no.: ");
    scanf("%d",&bin);
    int dec = bin_to_dec(bin);
    dec_to_hex(dec);
   
    return 0;
}