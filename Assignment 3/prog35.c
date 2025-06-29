// Write a c program to convert binary number to decimal number. 

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
    int bin;
    printf("Enter binary no.: ");
    scanf("%d",&bin);
    int dec = bin_to_dec(bin);
    printf("%d",dec);
    return 0;
}