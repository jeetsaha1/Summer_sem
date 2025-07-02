//Pascal triangle.

#include<stdio.h>

int main(){
    int n,num;
    printf("Enter the number: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n-i; space++)
        {
            printf(" ");
        }
        num =1;
        for (int k = 1; k <= i; k++)
        {
            printf("%d ",num);
            num = num*(i-k)/k;
        }
        printf("\n");        
    }
    
    return 0;
}