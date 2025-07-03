// Find the sum of all even or odd numbers in a given range using recursion.


#include<stdio.h>

int even(int n){
    static  int s =0;
    if(n<=0)
        return 0 ;
    if(n%2==0){
        even(n-1);
        s += n;
    }
    else{
        even(n-1);
    }
    return s;
}

int odd(int n){
    static int s =0;
    if(n<=0)
        return 0 ;
    if(n%2!=0){
        odd(n-1);
        s += n;
    }
    else{
        odd(n-1);
    }
    return s;
}


int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The sum of the even no. : %d\n",even(num));
    printf("The sum of the odd no. : %d\n",odd(num));
    return 0;
}