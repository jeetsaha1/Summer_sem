//  Enum in a Structure 
// Define an enumeration Color with members RED, GREEN, BLUE. Define a structure Circle 
// with members radius (float) and fill_color (of type enum Color). Write a C program to: 
// 1. Create a Circle variable. 
// 2. Assign a radius and a color (e.g., BLUE) to it. 
// 3. Print the circle's radius and its color (as a string, not just the integer value).

#include<stdio.h>

enum Color{
    RED,
    GREEN,
    BLUE
};

struct circle{
    int radius;
    enum Color fill_color;
};

int main(){
    struct circle cir;
    cir.radius = 5.0;
    cir.fill_color = GREEN;

    printf("The redius of the circle : %d\n",cir.radius);
    switch (cir.fill_color)
    {
    case RED:
        printf("RED");
        break;
    
    case GREEN:
        printf("GREEN");
        break;

    case BLUE:
        printf("BLUE");
        break;
    
    default:
        printf("Unknown color");
        break;
    }
    return 0;
}