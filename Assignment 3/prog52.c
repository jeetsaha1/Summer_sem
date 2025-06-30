// Write a c program to find out transport of a matrix. 


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
    int arr1[MAX][MAX],trans[MAX][MAX];
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

    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            trans[j][i] = arr1[i][j];
        }
    }
    printf("The transpose of the matrix is : \n");
    printMatrix(trans,m,n); 
    return 0;
}