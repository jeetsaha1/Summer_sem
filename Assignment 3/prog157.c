// Print all perfect numbers between the given interval using functions.


#include<stdio.h>

int perfect_no(int num){
     int sum =0;
    for (int i = 1; i <= num/2; i++)
    {
        if(num%i ==0){
            sum+= i;
        }
    }
    // printf("%d",sum);

    if(sum == num){
        return 1;
    }
    else    
        return 0;
}

int main(){
    int lower,upper;
    printf("Enter the lower and the uppper no. number repectively :");
    scanf("%d %d",&lower, &upper);
    for (int i = lower; i<=upper; i++)
    {
        if(perfect_no(i)){
            printf("%d ",i);
        }
    }
    return 0;
}