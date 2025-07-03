// Multiply two matrix using pointers. 

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
    int mul [m][n];
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           for (int k = 0; k < n; k++)
           {
                s += *(*(arr+i)+k) * *(*(arr2+k)+j);
           }
           mul[i][j] = s;
           
        }

    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",*(*(mul+i)+j));
        }
        printf("\n");
    }
    
    return 0;
}