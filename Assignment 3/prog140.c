// Add two matrix using pointers.

#include<stdio.h>

int main(){
    int m,n;
    printf("Enter the no. of rows columns: ");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    //For first matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the element [%d][%d]:",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    //For second matrix
    printf("\n\n");
    int arr2[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the element [%d][%d]:",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }
    int sum [m][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           *(*(sum+i)+j) = *(*(arr+i)+j)  +  *(*(arr2+i)+j);
        }

    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",*(*(sum+i)+j));
        }
        printf("\n");
    }
    
    return 0;
}