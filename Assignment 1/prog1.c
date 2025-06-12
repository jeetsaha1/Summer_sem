//	Program to Find Largest of Three Numbers Using Conditional Operator.

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the three numbers by giving space: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c)
        printf("%d is greater",a);
    else if(b>a && b>c)
        printf("%d is greater",b);
    else if(c>a && c>b)
        printf("%d is greater",c);
    return 0;
}

//Output:

// Enter the three numbers by giving space: 3 4 5
// 5 is greater