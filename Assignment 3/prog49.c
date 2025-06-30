// Write a c program for multiplication of two matrices. 


#include<stdio.h>
#include<stdlib.h>
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
    int m,n1;
    printf("Enter the no. of rows and columns respectively :");
    scanf("%d %d",&m,&n1);
    int arr1[MAX][MAX];
    //Making the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            printf("Enter element [%d][%d] :",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    
    printMatrix(arr1,m,n1);
    

    int n2,p;
    printf("Enter the no. of rows and columns respectively :");
    scanf("%d %d",&n2,&p);
    if(n1!=n2){
        printf("The multiplication can't be determined.");
        exit(0);
    }
    int arr2[MAX][MAX];
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("Enter element [%d][%d] :",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    printMatrix(arr2,n2,p);

    int mul[MAX][MAX];
    int s=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {   
            s=0;
            for (int k = 0; k < m; k++)
            {
                s += arr1[i][k]* arr2[k][j];
            }
            mul[i][j] = s;
        }
    }
    printf("The mulltiplication of two matrix is :\n");

    printMatrix(mul,m,p);

    return 0;
}