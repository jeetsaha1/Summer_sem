// Find diameter, circumference and area of a circle using functions. 

#include<stdio.h>

float dia(float radius){
    return radius*2;
}

float circum(float radius){
    return 2*3.14*radius;
}

float area(float radius){
    return 3.14*radius*radius;
}

int main(){
    float radius;
    printf("Enter the radius of the circle :");
    scanf("%f",&radius);
    printf("The diameter of the circle is %.2f\n",dia(radius));
    printf("The circumference of the circle is %.2f\n",circum(radius));
    printf("The area of the circle is %.2f\n",area(radius));
    return 0;
}