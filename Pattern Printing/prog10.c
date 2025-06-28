#include<stdio.h>

int main(){
    int num ;
    printf("Enter the number of lines : ");
    scanf("%d",&num);
    int n = num/2;
    for (int i = 1; i <= n; i++)        //For upper triangle
    {
        for (int k = 1; k <=n; k++)
        {
            printf(" ");
        }
         for (int k = 1; k <=n- i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");

    }
    //For lower part
    for (int i = 1; i <= n; i++){

        for (int k = 0; k < n-i; k++)
            printf(" ");
    
        for (int j = 1; j <= i; j++)
                printf("* ");
        
        for (int k = 1; k <=n- i; k++)
            printf(" ");
        
        for (int k = 1; k <=n- i; k++)
            printf(" ");
        
        for (int j = 1; j <= i; j++)
                printf("* ");
    
        printf("\n");
    }
    return 0;
}


//Output
// Enter the number of lines : 10
//          * 
//         * * 
//        * * * 
//       * * * * 
//      * * * * * 
//     *         * 
//    * *       * * 
//   * * *     * * * 
//  * * * *   * * * * 
// * * * * * * * * * * 