// Enum with Explicit Values 
// Define an enumeration TrafficLight with members RED = 1, YELLOW = 2, GREEN = 3. 
// Write a C program to: 
// 1. Declare a variable of type enum TrafficLight. 
// 2. Assign GREEN to it. 
// 3. Use a switch statement to print a message based on the assigned traffic light state.

#include<stdio.h>

enum traffic_lights{
    RED = 1,
    YELLOW = 2,
    GREEN = 3
};

int main(){
    enum traffic_lights current_light;

    current_light = RED;

    switch (current_light)
    {
    case RED:
        printf("RED. Stop!\n");
        break;

    case YELLOW:
        printf("YELLOW. Prepare to stop or go.\n");
        break;

    case GREEN:
        printf("GREEN. Go!\n");
        break;
    
    default:
        printf("Unknown state");
        break;
    }
    return 0;
}