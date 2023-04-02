#include<stdio.h>
void main(){
    int ar[50],i,n,j,temp;
    printf("Enter limit");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&ar[i]);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    for(i=0; i<n;i++)
    {
        printf("%d,",ar[i]);
    }
}