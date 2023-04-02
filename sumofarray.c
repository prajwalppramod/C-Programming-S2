#include<stdio.h>
int sum(int a[50],int l);
void main()
{
    int arr[50],n;
    printf("Enter length:");
    scanf("%d",&n);
    printf("Enter the elements to array:");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Sum of array is: %d",sum(arr,n));
}

int sum(int a[50],int l)
{
    int j,sum=0;
    for(j=0; j<l; j++)
    {
        sum+=a[j];
    }
    return sum;
}