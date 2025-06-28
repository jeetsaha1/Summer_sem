// Given a maximum of four digits to the base 17 (10 – A, 11 – B, 12 – C, 13 – D … 16 – G} as input, output its decimal value. 
//  input – 1A 
// Expected Output – 27 

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int char_to_int(char ch){
    if(isdigit(ch)){
        return ch-'0';
    }
    else if(isalpha(ch)){
        return toupper(ch) - 'A' +10;
    }
    else{
        return -1;
    }
}

int base17_to_dec(char str[]){
    int val,result=0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        val = char_to_int(str[i]);
        result = result*17 + val;      
    }
    return result;
}


int main(){
    char base17_dec[4];
    printf("Enter the hexa decimal number upto 4 digits :");
    scanf("%s",base17_dec);

    int dec = base17_to_dec(base17_dec);
    printf("The answer is %d",dec);
    return 0;
}