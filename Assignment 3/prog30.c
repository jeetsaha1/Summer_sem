//  Write a c program to convert octal number to hexadecimal number. 

#include<stdio.h>
#include<math.h>

int octal_to_dec(int oct){
    int dec =0,i=0;
    while(oct!=0){
        int rem = oct%10;
        dec += (rem*pow(8,i));
        oct /= 10;
        i++;
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
    int octal;
    printf("Enter the octal number: ");
    scanf("%d",&octal);

    int decimal = octal_to_dec(octal);
    dec_to_hex(decimal);
    return 0;
}