//Find the count of numbers less than equal to N having exactly 9 divisors.

#include<stdio.h>
#include<math.h>

int isPrime(int n){
    if(n<=1)    return 0;

    for (int i = 2; i *i<=n; i++)
    {
        if(n%i == 0)
            return 0; 
    }
    return 1;
    
}

int main(){

    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int count=0;

    //for checking the prime factor
    for (int p = 2; pow(p,8)<=num; p++)
    {
        if (isPrime(p))
        {
            count++;
        }
        
    }
    

    for (int p = 2; p *p<= num; p++)
    {
        if(!isPrime(p))  continue;
        for (int q = p+1; q*q<=num; q++)
        {
            if(!isPrime(q)) continue;
            if((long long)p*p * q*q<= num)

                count++;
        }
        
    }
    
    
    printf("%d ",count);
    return 0;
}