// /1.	Program to Find Largest of Three Numbers Using Conditional Operator.
// 2.	Program to Swap Two Numbers Without Using a Temporary Variable (Using XOR Operator).
// 3.	Program to find the roots of a Quadratic Equation.
// 4.	Program to Convert Decimal to Binary Using Bitwise Operators.
// 5.	Program to Implement a Simple Calculator Using Switch-Case.
// 6.	Program to Find Prime Numbers in a Given Range Using Nested Loops.
// 7.	Program to Print a Pattern of Stars Using Nested Loops.
// 8.   Program to Print Fibonacci Sequence Using a Loop.



// 9.	Write a menu driven program to combine all the programs mentioned in question 1 to question 8.


#include<stdio.h>
#include<math.h>
void fibbonacci(int num){
    int a = 0;
    int b = 1;
    
    for (int i = 0; i < num; i++)
    {
        printf("%d ",a );
        int c = a+b;
        a=b;
        b=c;

    }
    
}

int main(){
    float a,b,c, root1, root2,root1_real,root1_img,root2_real,root2_img,res;
    int a1,b1,bin[100],i=0,dec,f,range,n;
    char choice1;
    
    int choice;
    do{
        printf("\n_____Menu______\n1.Find the largest number\n2.Swap two numbers\n3.Find the roots of quadratic equation\n4.Decimal to Binary\n5.Calculator\n6.Prime no.\n7.pattern\n8.Fibbonacci\nWhich one you want?\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter the three numbers by giving space: ");
            scanf("%f %f %f",&a,&b,&c);

            if(a>b && a>c)
                printf("%f is greater",a);
            else if(b>a && b>c)
                printf("%f is greater",b);
            else if(c>a && c>b)
                printf("%f is greater",c);
            break;

        case 2:
            printf("Enter the two numbers by giving space : ");
            scanf("%d %d",&a1,&b1);

            a1 = a1 ^ b1;
            b1 = a1^ b1;
            a1 = a1 ^ b1;
            printf("The swapped numbers are : %d %d",a1,b1);
            break;
        
        case 3:
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
            break;

        case 4:
            printf("Enter decimal number : ");
            scanf("%d",&dec);
            while(dec>0){
                bin[i] = dec & 1;
                dec = dec>>1;
                i++;
            }
            printf("The binary number is : ",dec);
            for (int j = 0; j < i; j++)
            {
                printf("%d",bin[i]);
            }
            break;
        case 5:
            do{
                
                printf("\n_______MENU________\n'+' for additon\n'-' for subtraction\n'*' for multiplication\n'/' for division\n'e' for exit\nWhich one you want ?\n");
                scanf(" %c", &choice1);
                printf("\nEnter the two numbers : ");
                scanf("%f %f",&a,&b);
                switch (choice1)
                {
                case '+':
                    res = a+b;
                    printf("The result is : %.2f",res);
                    break;
                
                case '-':
                    res = a-b;
                    printf("The result is : %.2f",res);
                    break;

                case '*':
                    res = a*b;
                    printf("The result is : %.2f",res);
                    break;

                case '/':
                    res = a/b;
                    printf("The result is : %.2f",res);
                    break;
                
                case 'e':
                    printf("Exiting ...");
                    break;
                default:
                    break;
                }
            }while( choice1 != 'e');
            break;

        case 6:
            printf("Enter the range :");
            scanf("%d",&range);

            for (int i = 2; i <= range; i++)
            {
                f=1;
                for (int j = 2; j < i; j++)
                {
                    if(i%j== 0)
                        f = 0;
                }
                if(f==1){
                    printf("%d ",i);
                }
            }
            break;

        
        case 7:
            printf("Enter the number of lines : ");
            scanf("%d",&n);

            for (int i = 0; i <= n; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
             
            
        case 8:
            printf("Enter the range : ");
            scanf("%d",&range);

            fibbonacci(range);
            
            break;
        default:
            break;
                }
    }while (choice != 9);
           
    return 0;
}





//Output

// _____Menu______
// 1.Find the largest number
// 2.Swap two numbers
// 3.Find the roots of quadratic equation
// 4.Decimal to Binary
// 5.Calculator
// 6.Prime no.
// 7.pattern
// 8.Fibbonacci
// Which one you want?
// 5

// _______MENU________
// '+' for additon
// '-' for subtraction
// '*' for multiplication
// '/' for division
// 'e' for exit
// Which one you want ?
// +

// Enter the two numbers : 2 3
// The result is : 5.00
// _______MENU________
// '+' for additon
// '-' for subtraction
// '*' for multiplication
// '/' for division
// 'e' for exit
// Which one you want ?
// -

// Enter the two numbers : 4 1
// The result is : 3.00
// _______MENU________
// '+' for additon
// '-' for subtraction
// '*' for multiplication
// '/' for division
// 'e' for exit
// Which one you want ?
// *

// Enter the two numbers : 43 45
// The result is : 1935.00
// _______MENU________
// '+' for additon
// '-' for subtraction
// '*' for multiplication
// '/' for division
// 'e' for exit
// Which one you want ?
// /

// Enter the two numbers : 24 4
// The result is : 6.00
// _______MENU________
// '+' for additon
// '-' for subtraction
// '*' for multiplication
// '/' for division
// 'e' for exit
// Which one you want ?
// *

// Enter the two numbers : 345 90
// The result is : 31050.00
// _______MENU________
// '+' for additon
// '-' for subtraction
// '*' for multiplication
// '/' for division
// 'e' for exit
// Which one you want ?
// e

// Enter the two numbers : 3 4
// Exiting ...
// _____Menu______
// 1.Find the largest number
// 2.Swap two numbers
// 3.Find the roots of quadratic equation
// 4.Decimal to Binary
// 5.Calculator
// 6.Prime no.
// 7.pattern
// 8.Fibbonacci
// Which one you want?
// 6
// Enter the range :20
// 2 3 5 7 11 13 17 19 
// _____Menu______
// 1.Find the largest number
// 2.Swap two numbers
// 3.Find the roots of quadratic equation
// 4.Decimal to Binary
// 5.Calculator
// 6.Prime no.
// 7.pattern
// 8.Fibbonacci
// Which one you want?
// 7
// Enter the number of lines : 10

// *
// **
// ***
// ****
// *****
// ******
// *******
// ********
// *********
// **********

// _____Menu______
// 1.Find the largest number
// 2.Swap two numbers
// 3.Find the roots of quadratic equation
// 4.Decimal to Binary
// 5.Calculator
// 6.Prime no.
// 7.pattern
// 8.Fibbonacci
// Which one you want?
// 8
// Enter the range : 
// 10
// 0 1 1 2 3 5 8 13 21 34 
// _____Menu______
// 1.Find the largest number
// 2.Swap two numbers
// 3.Find the roots of quadratic equation
// 4.Decimal to Binary
// 5.Calculator
// 6.Prime no.
// 7.pattern
// 8.Fibbonacci
// Which one you want?
// 9
// PS C:\Users\JEET SAHA\.vscode\exten