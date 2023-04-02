#include<stdio.h>
void main(){
    int n,i,sum=0;
    printf("Enter limit:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("Sum is %d",sum);
}