#include<stdio.h>
void main(){
    int i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    {
        printf("\n%d x %d = %d",i,n,i*n);
    }
}