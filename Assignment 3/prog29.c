// Write a c program to convert octal number to decimal number. 

#include<stdio.h>
#include<math.h>

int main(){
    int oct,dec=0,i=0;
    printf("Enter the octal number : ");
    scanf("%d",&oct);
    
    if (oct==0)
    {
        printf("0");
        return 0;
    }
    

    while (oct>0)
    {   
        int r =oct%10;
        dec += (r*pow(8,i));
        oct /= 10;
        i++;
    }
    
    printf("%d",dec);

    return 0;
}