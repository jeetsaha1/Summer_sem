//Program to find the roots of a Quadratic Equation.

#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c, root1, root2,root1_real,root1_img,root2_real,root2_img;
    printf("Enter the coefficient of x^2 (a) : ");
    scanf("%f",&a);
    printf("Enter the coefficient of x (b): ");
    scanf("%f",&b);
    printf("Enter the c : ");
    scanf("%f",&c);

    float D = (b*b)-(4*a*c);

    if(D>0){
        root1 = (-b+pow(D,0.5))/(2*a);
        root2 = (-b-pow(D,0.5))/(2*a);
        printf("%.2f,%.2f",root1,root2);
    }
    else if(D == 0){
        root1 = root2 = -b/(2*a);
        printf("%.2f,%.2f",root1,root2);
    }
    else if(D<0){
        D = -D;
        root1_real = -b/(2*a);
        root1_img = pow(D,0.5)/(2*a);

        root2_real = -b/(2*a);
        root2_img = -(pow(D,0.5)/(2*a));

        printf("%.2f+(%.2f)i,%.2f+(%.2f)i",root1_real,root1_img,root2_real,root2_img);
    }

    return 0;
}

//Output

// Enter the coefficient of x^2 (a) : 2
// Enter the coefficient of x (b): 2
// Enter the c : 2
// -0.50+(0.87)i,-0.50+(-0.87)i