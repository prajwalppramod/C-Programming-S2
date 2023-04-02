#include<stdio.h>
int checkPrime(int);
void main()
{
    int limit,i,j,flag;
    printf("Enter limit:");
    scanf("%d",&limit);
    for(i=1; i<limit; i++)
    {   
        flag=checkPrime(i);
        if(flag==0 && i!=1)
        {
            printf("%d ",i);
        }
    }
}

int checkPrime(int num)
{
    int flag=0,j;
    for(j=2; j<num/2; j++)
    {
        if(num%j==0)
        {
            flag=1;
            break;
        }
        
    }  
    return flag;
} 