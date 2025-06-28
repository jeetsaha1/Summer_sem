//  Implement a program to calculate the free number of cups the user gets for 
// a specified number of cups bought by the user. In this particular case, the user 
// gets 1 cup free for every 6 cups bought. (Example: If the user buys 12 cups, 
// he gets 2 cups free as per the Buy 6 Get 1 Free offer, and hence the output 
// will be 12+2 = 14 cups). 
// Input Format 
// The input here is the number of coffee cups bought by the user. 
// Constraints 
// number of cups>=1. 
// Output Format 
// The output is the total number of cups the user gets including the free coffee 
// cups

#include<stdio.h>

int main(){
    int num,temp,count=0;
    printf("Enter the number of cup of coffee :");
    scanf("%d",&num);
    temp = num;
    while (num>=1)
    {
        num = num-6;
        count+=1;
    }
    int total = temp + count;
    printf("The total number of cups: %d",total);
    return 0;
}