//Write a c program to check given number is Armstrong number or not.

#include<stdio.h>
#include<math.h>

int power(int n){
    int count = 0;
    while (n> 0)
    {
        n=n/10;
        count ++;
    }
    return count;
}

int armstrong(int n){
    int sum = 0;
    int len = power(n);
    int temp =n;
    while(temp>0){
        int r = temp%10;
        int item =1;
        for (int i = 0; i < len; i++)
        {
            item = item * r;   
        }
        
        sum += item;
        temp /= 10;
    }
    return sum;
}

int main(){
    int n =153;
    if(n == armstrong(n))
        printf("armstrong");
    else
        printf("not armstrong");
    return 0;
}