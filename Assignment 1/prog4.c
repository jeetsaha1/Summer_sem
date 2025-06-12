//Program to Convert Decimal to Binary Using Bitwise Operators.

#include<stdio.h>

int main(){
    int dec;
    printf("Enter decimal number : ");
    scanf("%d",&dec);
    int bin[100],i=0;
    while(dec>0){
        bin[i] = dec & 1;
        dec = dec>>1;
        i++;
    }
    printf("The binary number is : ",dec);
    for (int j = 0; j < i; j++)
    {
        printf("%d",bin[i]);
    }
    
    return 0;
}


//Output

// Enter decimal number : 15
// The binary number is : 1111