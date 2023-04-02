#include<stdio.h>
int power(int num, int pow);
void main()
{
    int n,p;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the power:");
    scanf("%d",&p);
    printf("Result is: %d:",power(n,p));
}
int power(int num, int pow)
{   int result=num;
    for(int i=0; i<pow-1; i++)
    {
        result=result*num;
    }
    return result;
}
