// // Write a C program to convert a given integer (in seconds) to hours, minutes and 
// seconds. 
// Test Data :  
// Input seconds: 25300  
// Expected Output: H:M:S - 7:1:40


#include<stdio.h>


void calc_sec(int sec){
    printf("%d",sec);
}

void calc_minuite(int sec){
    if(sec<60){
        calc_sec(sec);
    }
    else{
        int m = sec/60;
        printf("%d:",m);
        calc_sec(sec%60);
    }
}

void calc_hour(int sec){
    if(sec<3600){
        calc_minuite(sec);
    }
    else{
        int h = sec/3600;
        printf(" %d:",h);
        calc_minuite(sec%3600);
    }
}

int main(){
    int sec ;
    printf("Enter the no. of seconds: ");
    scanf("%d",&sec);
    calc_hour(sec);
    return 0;
}