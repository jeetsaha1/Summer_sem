//C program to find determinant of a matrix

#include<stdio.h>
#define MAX 10

//Getting the co-factor
void get_cofactor(int arr[MAX][MAX],int temp[MAX][MAX],int p, int q, int n){
    int r=0,c=0;
    for (int i = 0; i < n; i++)
    {
        if(i==p)
            continue;
        c=0;
        for (int j = 0; j < n; j++)
        {
            if(j==q)
                continue;
            temp[r][c] = arr[i][j];
            c++;
        }
        r++;
    }
}

int determinant(int arr[MAX][MAX],int n){
    if(n==1)
        return arr[0][0];
    int temp[MAX][MAX];
    int sign =1, det= 0;
    for (int f = 0; f < n; f++)
    {
        get_cofactor(arr,temp,0,f,n);
        det += sign *arr[0][f] * determinant(temp, n-1);
        sign = -sign;
    }
    return det;
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
    int det = determinant(arr1,m);
    printf("%d",det);

    return 0;
}