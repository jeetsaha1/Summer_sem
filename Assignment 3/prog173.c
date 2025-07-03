//  Count the total number of notes in a given amount. 

#include<stdio.h>

int main(){
    int amount,count=0;;
    printf("Enter the amount: ");
    scanf("%d",&amount);
    int denomination[]={2000,500,200,100,50,20,10,5,2,1};
    int n = sizeof(denomination)/sizeof(denomination[0]);

    for (int i = 0; i < n; i++)
    {
        if(amount>=denomination[i]){
            int notes = amount/denomination[i];
            amount -= notes*denomination[i];
            count+= notes;
        }
    }
    printf("The no. of notes: %d",count);
    return 0;
}