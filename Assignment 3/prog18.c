//Write a c program to find out prime factor of given number. 

#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    
    //Searching for the prime factor
    for (int i = 2; i*i <= num; i++)
    {
        while(num%i == 0){
            printf("%d ",i);
            num /= i;
        }
    }
    if(num>1){
        printf("%d ",num);
    }
    
    return 0;
}