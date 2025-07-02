// Write a C program to convert a given integer (in days) to years, months and days, 
//assumes that all months have 30 days and all years have 365 days. 

#include<stdio.h>


void calc_day(int day){
    printf("Day : %d\n",day);
}

void calc_month(int day){
    if(day<30){
        calc_day(day);
    }
    else{
        int m = day/30;
        calc_day(day%30);
        printf("Month : %d\n",m);
    }
}

void calc_year(int day){
    if(day<365){
        calc_month(day);
    }
    else{
        int y = day/365;
        calc_month(day%365);
        printf("Year : %d\n",y);
    }
}

int main(){
    int day ;
    printf("Enter the no. of days: ");
    scanf("%d",&day);
    calc_year(day);
    return 0;
}