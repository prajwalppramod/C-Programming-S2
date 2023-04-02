#include<stdio.h>
void addmatrix(int A[50][50], int B[50][50], int r, int c);
void multiply(int A[50][50], int B[50][50], int r, int c);
void displaymatrix(int A[50][50],int r, int c);
void transpose(int A[50][50], int r, int c);
void main()
{
    int a[50][50], b[50][50],c[50][50], r1,c1,r2,c2,ch;
    printf("1 for addition \n 2 for multiplication \n 3 for transpose \nEnter the choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("Enter the rows of first matrix:");
            scanf("%d",&r1);
            printf("Enter the columns of first matrix:");
            scanf("%d",&c1);
            for(int i=0; i<r1; i++)
            {
                for(int j=0; j<c1; j++)
                {
                    printf("Enter element [%d][%d]:",i+1,j+1);
                    scanf("%d",&a[i][j]);
                }
            }
            printf("Enter the rows of second matrix:");
            scanf("%d",&r2);
            printf("Enter the columns of second matrix:");
            scanf("%d",&c2);
            for(int i=0; i<r2; i++)
            {
                for(int j=0; j<c2; j++)
                {
                    printf("Enter element [%d][%d]:",i+1,j+1);
                    scanf("%d",&b[i][j]);
                }
            }
            if(r1==r2 && c2==c2)
            {   addmatrix(a,b,r1,c1); }
            else
            {   printf("Addition not possible"); }
            break;
        case 2:
            printf("Enter the rows of first matrix:");
            scanf("%d",&r1);
            printf("Enter the columns of first matrix:");
            scanf("%d",&c1);
            for(int i=0; i<r1; i++)
            {
                for(int j=0; j<c1; j++)
                {
                    printf("Enter element [%d][j\%d]:",i+1,j+1);
                    scanf("%d",&a[i][j]);
                }
            }
            printf("Enter the rows of second matrix:");
            scanf("%d",&r2);
            printf("Enter the columns of second matrix:");
            scanf("%d",&c2);
            for(int i=0; i<r2; i++)
            {
                for(int j=0; j<c2; j++)
                {
                    printf("Enter element [%d][%d]:",i+1,j+1);
                    scanf("%d",&b[i][j]);
                }
            }
            if(c1==r2)
            {   multiply(a,b,r1,c1); }
            else
            {   printf("Multiplication not possible"); }
            break;
        case 3:
            printf("Enter the rows of matrix:");
            scanf("%d",&r1);
            printf("Enter the columns of matrix:");
            scanf("%d",&c1);
            for(int i=0; i<r1; i++)
            {
                for(int j=0; j<c1; j++)
                {
                    printf("Enter element [%d][%d]:",i+1,j+1);
                    scanf("%d",&a[i][j]);
                }
            }
            transpose(a,r1,c1);
            break;

    }

}
void displaymatrix(int A[50][50],int r, int c)
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
        
    }
}
void addmatrix(int A[50][50], int B[50][50], int r, int c)
{
    int C[50][50];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            
        }
    }
    displaymatrix(C,r,c);
}
void multiply(int A[50][50], int B[50][50], int r, int c)
{
    int C[50][50];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            for(int k=0; k<r; k++)
            {   C[i][j]=A[i][k]*B[k][j];
            }
        }
    }
    displaymatrix(C,r,c);
}
void transpose(int A[50][50], int r, int c)
{
    int C[50][50];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            C[i][j]=A[j][i];
        }
    }
    displaymatrix(C,r,c);
}