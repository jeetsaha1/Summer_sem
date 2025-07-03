// Return multiple values from a function using pointers. 

#include<stdio.h>
void multiple_val(int *a, int *b, int *sum , int * product){
    *sum = *a +*b;
    *product = *a * *b;
}
int main(){
    int a,b;
    printf("Enter two numbers respectively: ");
    scanf("%d %d",&a,&b);
    int sum,product;
    multiple_val(&a,&b,&sum,&product);
    printf("The sum is: %d\n",sum);
    printf("The product is:%d",product);
    return 0;
}