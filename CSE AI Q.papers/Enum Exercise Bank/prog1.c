// Basic Enum Declaration and Usage 
// Define an enumeration WeekDay with members MONDAY, TUESDAY, WEDNESDAY, 
// THURSDAY, FRIDAY, SATURDAY, SUNDAY. Write a C program to: 
// 1. Declare a variable of type enum WeekDay. 
// 2. Assign WEDNESDAY to it. 
// 3. Print the integer value associated with WEDNESDAY.

#include<stdio.h>

enum weekdays{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main(){
    enum weekdays today;
    today = Wednesday;
    printf("The no. of the date is : %d",today);
    return 0;
}