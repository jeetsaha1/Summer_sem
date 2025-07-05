//C program to find inverse of a matrix. 

#include<stdio.h>
#include<math.h>
#define MAX 10

void getCofactor(int arr[MAX][MAX], int temp[MAX][MAX], int p,int q, int n){
    int r =0, c=0;
    for (int i = 0; i < n; i++)
    {
        if(i == p)
            continue;
        c= 0;
        for (int j = 0; j < n; j++)
        {
            if(j == q)
                continue;
            temp[r][c]= arr[i][j];
            c++;
        }
        r++;
    }
}

int determinant(int arr[MAX][MAX], int n){
    if(n==1){
        return arr[0][0];
    }
    int temp [MAX][MAX];
    int det =0, sign =1;
    for (int f = 0; f < n; f++)
    {
        getCofactor(arr,temp,0,f,n);
        det += sign* arr[0][f] * determinant(temp,n-1);
        sign = -sign;
    }
    return det;
}

void adjoint(int arr[MAX][MAX],int adj[MAX][MAX],int n){
    if(n == 1){
        adj[0][0] = 1;
        return;
    }
    int sign = 1;
    int temp[MAX][MAX];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            getCofactor(arr,temp,i,j,n);
            sign = ((i+j)%2 == 0)?1:-1;
            adj[i][j] = sign*determinant(temp,n-1);
        }
        
    }
    
}

int main(){
    //Initializing the square matrix
    int n;
    printf("Enter the number of rows and columns: ");
    scanf("%d",&n);
    int arr[MAX][MAX],adj[MAX][MAX];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the element [%d][%d] : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
        
    }

    //For determining the deterinant of the matrix
    int det = determinant(arr,n);

    //Determinig the adj(arr)
    adjoint(arr,adj,n);
    
    //Divide the every elemnt of adj(arr) by det
    
    if(det == 0){
        printf("The inverse can't be calculated");
        return 0;
    }
    float inverse;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            inverse = 0;
            inverse = 1.0*adj[i][j]/det;
            printf("%.2f ",inverse);
        }
        printf("\n");
        
    }
    

    
    return 0;
}