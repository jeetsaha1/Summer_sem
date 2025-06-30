// Write a c program to find out absolute difference between sum of diagonal element of a matrix. 


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
    int sum_left = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j){
                sum_left += arr1[i][j];
            }
        }
        
    }
    int sum_right = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i+j == m-1){
                sum_right += arr1[i][j];
            }
        }
        
    }
    
    int abs = sum_left-sum_right;
    if(abs<0){
        abs = -abs;
    }
    printf("The absolute difference of diagonal of the matrix is : %d",abs);


    return 0;
}