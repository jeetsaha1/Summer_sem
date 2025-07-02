// Add two numbers using pointers. 

#include<stdio.h>
int add(int *a, int *b){
    return *a + *b;
}
int main(){
    int a,b;
    printf("Enter the two numbers respectively: ");
    scanf("%d %d",&a,&b);
    int res = add(&a,&b);
    printf("The sum is : %d",res);
    return 0;
}