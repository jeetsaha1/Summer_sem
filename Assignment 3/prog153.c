//. Check whether a number is prime, Armstrong or perfect number using functions.

#include<stdio.h>
#include<math.h>

int isPrime(int n){
    int f=1;
    for (int i = 2; i < n/2; i++)
    {
        if((n%i) == 0){
            return 0;
        }    
    }
    return 1;
}

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
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    //prime no.
    if(isPrime(num))
        printf("The no. is prime");
    else
        printf("The no. is not prime");

    //armstrong no.
    if(num == armstrong(num))
        printf("The no. is armstrong");
    else
        printf("The no. is not armstrong");

    //perfect no.
     int sum =0;
    for (int i = 1; i <= num/2; i++)
    {
        if(num%i ==0){
            sum+= i;
        }
    }
    // printf("%d",sum);

    if(sum == num){
        printf("The number is perfect.");
    }
    else    
        printf("The number is not perfect.");
    return 0;
}