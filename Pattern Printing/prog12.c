// * * * * * * * * * * * * * * * * * * * * * * * * * * * 
//   *           *     *           *     *           *   
//     *       *         *       *         *       *     
//       *   *             *   *             *   *       
//         *                 *                 *
//       *   *             *   *             *   *       
//     *       *         *       *         *       *     
//   *           *     *           *     *           *   
// * * * * * * * * * * * * * * * * * * * * * * * * * * *
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == 0||i == n-1){
                printf("* ");
            }
            else if(i==j || i+j == n-1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        //2nd pattern
        for (int j = 0; j < n; j++)
        {
            if(i == 0||i == n-1){
                printf("* ");
            }
            else if(i==j || i+j == n-1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        //3rd pattern
        for (int j = 0; j < n; j++)
        {
            if(i == 0||i == n-1){
                printf("* ");
            }
            else if(i==j || i+j == n-1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
        
    }
    
    return 0;
}