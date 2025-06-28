// * 
// * *                             
// * * *                      
// * *                             
// * 

#include<stdio.h>

int main(){
    int num;
    printf("Enter the numbers: ");
    scanf("%d",&num);
    int n = num/2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}