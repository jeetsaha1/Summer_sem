// C program for addition of binary numbers. 

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
    int bin1, bin2,sum,carry,ans;
    printf("Enter the first bin no.: ");
    scanf("%d",&bin1);
    int dec1= bin_to_dec(bin1);
    printf("Enter the second bin no.: ");
    scanf("%d",&bin2);
    int dec2= bin_to_dec(bin2);

    int res = dec1+dec2;

    int bin[20],i=0;

    if(res == 0){
        printf("0");
        return 0;
    }
    
    while (res>0)
    {
        int temp = res%2;
        bin[i] = temp;
        res = res/2;
        i++;
    }

    for (int j = i-1; j >= 0; j--)
    {
        printf("%d",bin[j]);
        
    }
    

    
    return 0;
}