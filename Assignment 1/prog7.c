//Program to Print a Pattern of Stars Using Nested Loops.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of lines : ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

//Output

// Enter the number of lines : 10

// *
// **
// ***
// ****
// *****
// ******
// *******
// ********
// *********