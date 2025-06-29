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
    printf("%d",decimal);
    return 0;
}