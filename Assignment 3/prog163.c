//Find reverse of any number using recursion. 

#include<stdio.h>

int reverse(int n){
    static int s = 0;
    if(n == 0){
        return s;
    }
    else{
        s =  s*10+(n%10);
         reverse(n/10);
    }
}

int main(){
     int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The reversed no. : %d ",reverse(num));
    return 0;
}