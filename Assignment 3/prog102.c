// Matrix rotation by 90 degrees clockwise and anticlockwise. 

#include<stdio.h>



int main(){
    int n;
    printf("Enter the no. of rows and cols. : ");
    scanf("%d",&n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the ele %d: ",i+1);
            scanf("%d",&arr[i][j]);   
        }
        
    }

    //Rotation 90 degree clockwise

    int r[n][n];
    
    int trans[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            trans[j][i] = arr[i][j];
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            r[i][k] = trans[i][n-k-1];
        }
        
    }
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",r[i][j]);
        }
        printf("\n");        
    }

    printf("\n");
    //Rotation 90 degree anti clockwise

    int r1[n][n];
    
    int trans1[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            trans1[j][i] = arr[i][j];
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            r1[i][k] = trans[n-i-1][k];
        }
        
    }
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",r1[i][j]);
        }
        printf("\n");        
    }
    

    
    return 0;
}