#include<stdio.h>
void main()
{
    int ar[50],n,i,largest=0;
    printf("Enter limit");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&ar[i]);
    }
    for(i=0; i<n; i++)
    {
        if(ar[i]>largest)
        {
            largest=ar[i];
        }
    }
    printf("Largest element is %d", largest);
}