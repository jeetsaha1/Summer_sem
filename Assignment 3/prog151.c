// Maximum and minimum between two numbers using functions.

#include<stdio.h>

int max(int a, int b){
    return (a>b)?a:b;
}
int main(){
    int a,b;
    printf("Enter two numbers respectively: ");
    scanf("%d %d",&a,&b);
    printf("The maximum is %d",max(a,b));
    return 0;
}