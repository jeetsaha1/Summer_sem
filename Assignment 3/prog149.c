//. Cube of any number using the function.

#include<stdio.h>

int cube(int num){
    int f =1;
    for (int i = 0; i < 3; i++)
    {
        f=f*num;
    }
    return f;
}

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int c= cube(num);
    printf("The cube of the number is: %d",c);
    return 0;
}