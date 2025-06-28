// Write a c program to find largest among three numbers using conditional operator. 

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the three numbers respectively: ");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c)
    {
        printf("%d is large",a);
    }
    else if(b>a && b>c){
        printf("%d is large",b);
    }
    else if(c>a && c>b){
        printf("%d is large",c);
    }
    
    return 0;
}