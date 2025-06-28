//  Implement a program to extract digits from the given number 
// Input Format 
// a number from the user 
// Constraints 
// Number>0 
// Output Format 
// print digits in line separated by space

#include<stdio.h>

int main(){
    int num,r,i=0;
    printf("Enter the number:");
    scanf("%d",&num);
    int arr[100];
    while (num!=0)
    {
        r = num%10;
        arr[i] = r;
        num = num/ 10;
        i++;
    }

    for (int j = i-1; j>=0; j--)
    {
        printf("%d ",arr[j]);
    }
    
    
    return 0;
}