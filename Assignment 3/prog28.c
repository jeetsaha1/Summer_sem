//  Write a c program to convert octal number to binary number. 

#include<stdio.h>

void bin(int oct){
    switch (oct)
    {
    case 0:
        printf("000");
        break;
    case 1:
        printf("001");
        break;
    case 2:
        printf("010");
        break;
    case 3:
        printf("011");
        break;
    case 4:
        printf("100");
        break;
    case 5:
        printf("101");
        break;
    case 6:
        printf("110");
        break;
    case 7:
        printf("111");
        break;
   
    default:
        printf("Invalid");
        break;
    }
}

int main(){
    int octal,i=0;
    printf("Enter the octal number : ");
    scanf("%d",&octal);
    int temp[20];
    while (octal>0)
    {
        int r = octal%10;
        temp[i] = r;
        octal /= 10;
        i++;
    }
    
    for (int j = i-1; j >=0 ; j--)
    {
        bin(temp[j]);
    }
    
    return 0;
}