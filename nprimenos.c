#include<stdio.h>

int main()

{

   int a,i,x=1,count,c=0;

   printf("Enter a number :");

   scanf("%d",&a); //Read number of primes required

   printf("The first %d primes are :\n",a);

   while(c<a)

   {

    count=0; //set count as zero to count factors of current number (x).

    for(i=1;i<=x;i++)

    {

        if(x%i==0) //check the iteration value is factor of current number or not.

        count++;

    }

    if(count==2) //Every prime number should have only two factors.

    {

        printf("%d \t",x);

        c++;

    }

    x++;

   }

   return c;

}