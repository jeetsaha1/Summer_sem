// Write a c program to find out sum of diagonal element of a matrix.


#include<stdio.h>
#define MAX 10

void printMatrix(int arr[MAX][MAX],int m, int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    //Entering the no. of rows and columns
    int m,n;
    printf("Enter the no. o rows and columns respectivey :");
    scanf("%d %d",&m,&n);
    int arr1[MAX][MAX];
    //Making the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element [%d][%d] :",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    
    printMatrix(arr1,m,n);
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j){
                sum += arr1[i][j];
            }
        }
        
    }
    
    printf("The addition of the diagonal of the matrix is : %d",sum);


    return 0;
}