// Replace all 0’s with 1 in a given integer.

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int new_dig =0,place=1;
    while (num!=0)
    {
        int r = num%10;
        if(r == 0){
            r = 1;
        }
        new_dig = new_dig + r*place;
        place*= 10;
        num /=10;
    }

    printf("%d",new_dig);
    
    return 0;
}