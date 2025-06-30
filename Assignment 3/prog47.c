//Write a c program for addition of two matrices.

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
    
    int arr2[MAX][MAX];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element [%d][%d] :",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    printMatrix(arr2,m,n);
    int sum[MAX][MAX];
    int s=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            s = arr1[i][j] + arr2[i][j];
            sum[i][j] = s;
        }
    }
    printf("The addition of two matrix is :\n");

    printMatrix(sum,m,n);



    return 0;
}