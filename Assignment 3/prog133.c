// Swap two numbers using pointers. 


#include<stdio.h>
void swap(int *a, int *b){
    int t= *a;
    *a = *b;
    *b =t;
}
int main(){
    int a,b;
    printf("Enter the two numbers of a and b respectively: ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a: %d, b:%d",a,b);
    return 0;
}