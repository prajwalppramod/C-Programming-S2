#include<stdio.h>
void main(){
    int A[50][50], B[50][50], result[50][50],row,column,sum=0;
    printf("Enter rows and columns of first matrix:");
    scanf("%d %d",&row, &column);
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("Enter %d %d element:", i,j);
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("Enter rows and columns of second matrix:");
    scanf("%d %d",&row, &column);
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("Enter %d %d element:", i,j);
            scanf("%d", &B[i][j]);
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            for(int k=0; k<row;k++)
            {
                sum+=A[i][k]*B[k][j];
                sum=0;
            }
            result[i][j]=sum;
        }
    }
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            for(int k=0; k<column;k++)
            {
               printf("%d", result[i][j]);
            }
            
        }
    }
}