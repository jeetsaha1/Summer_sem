//Write a c program for scalar multiplication of matrix. 

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
    printf("Enter the no. of rows and columns respectively :");
    scanf("%d %d",&m,&n);
    int arr1[MAX][MAX],scaler_mul[MAX][MAX];

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
    int num;
    printf("Enter the number for scaler multiply: ");
    scanf("%d",&num);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scaler_mul[i][j] = num*arr1[i][j];
        }
    }

    printMatrix(scaler_mul,m,n);
    return 0;
}