// #include<stdio.h>
// int multi(int matrix1[50][50], int matrix2[50][50]);
// void main()
// {
//     int mat1[50][50],mat2[50][50], row1,col1,row2,col2;
//     printf("Enter no of rows of matrix 1:");
//     scanf("%d",row1);
//     printf("Enter no of columns of matrix 1:");
//     scanf("%d",col1); 
    

//     printf("Enter no of rows of matrix 2:");
//     scanf("%d",row2);
//     printf("Enter no of columns of matrix 2:");
//     scanf("%d",col2);
    
//     printf("Enter elements of matrix 1:\n");
//     for(int i=0; i<row1; i++)
//         for(int j=0; j<col1; j++)
//         {
//             printf("Enter element [i][j]:");
//             scanf("%d",&mat1[i][j]);
//         } 
//     printf("Enter elements of matrix 2:\n");
//     for(int i=0; i<row2; i++)
//         for(int j=0; j<col2; j++)
//         {
//             printf("Enter element [i][j]:");
//             scanf("%d",&mat2[i][j]);
//         } 

//     if(row1==row2 && col1==col2)
//     {
//         multi(mat1,mat2);
//     }
// }

// int multi(int matrix1[50][50], int matrix2[50][50])
// {
//     int i,j,k,
    
// }

#include<stdio.h>
int matradd(int a[50][50],int b[50][50],int r,int c);
void main()
{
    int a[50][50], b[50][50], sum[50][50], r,c;
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of columns:");
    scanf("%d",&c);
    printf("Enter elements of first matrix:\n");
    for(int i=0; i<r; i++)
    {   for(int j=0; j<c; j++)
        {   printf("Enter element [%d][%d]:",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(int i=0; i<r; i++)
    {   for(int j=0; j<c; j++)
        {   printf("Enter element [%d][%d]:",i+1,j+1);
            scanf("%d", &b[i][j]);
        }
    }
    matradd(a,b,r,c);
}
int matradd(int a[50][50], int b[50][50],int r,int c)
{
    int sum[50][50];
    for(int i=0; i<r; i++)
    {   for(int j=0; j<c; j++)
        {   sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0; i<r; i++)
    {   for(int j=0; j<c; j++)
        {   printf(" %d\t",sum[i][j]);
        }
        printf("\n");
    }         
}