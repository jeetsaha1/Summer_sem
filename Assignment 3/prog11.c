//Write a c program to print ASCII value of all characters.

#include<stdio.h>

int main(){
    for (int i = 0; i < 127; i++)
    {
        printf("%d : %c\n",i,i);
    }
    
    return 0;
}