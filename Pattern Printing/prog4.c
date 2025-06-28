#include<stdio.h>

int main(){
    int n = 5;
    for (int i = 0; i < (n-2); i++) //upper part
    {
        for (int j = 0; j < (n-2)-i-1; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }



    for (int i = 0; i < n; i++){        //middle part
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        for (int j = n; j >i; j--)
        {
            printf("* ");
        }
        
        printf("\n");
    }


    for (int i = 0; i < (n-2); i++)        //lower part
    {
        
         for (int j = 0; j < n-i-1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    
    
    return 0;
}


//Output

//     * 
//   * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
//     *
//    * *
//   * * *