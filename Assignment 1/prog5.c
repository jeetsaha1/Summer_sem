//Program to Implement a Simple Calculator Using Switch-Case.

#include<stdio.h>

int main(){
     float a,b;
    float  res;
    char choice;
    do{
        
        printf("\n_______MENU________\n'+' for additon\n'-' for subtraction\n'*' for multiplication\n'/' for division\n'e' for exit\nWhich one you want ?\n");
        scanf(" %c", &choice);
        printf("\nEnter the two numbers : ");
        scanf("%f %f",&a,&b);
        switch (choice)
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
    }while( choice != 'e');
    return 0;
}

//Output


// _______MENU________
// '+' for additon
// '-' for subtraction
// '*' for multiplication
// '/' for division
// 'e' for exit
// Which one you want ?
// +

// Enter the two numbers : 1 2
// The result is : 3.00
// _______MENU________
// '+' for additon
// '-' for subtraction
// '*' for multiplication
// '/' for division
// 'e' for exit
// Which one you want ?
// e


