#include <stdio.h>

int sum(int n)
{   
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int main() {

   int n;

   printf("Enter a number: ");

   scanf("%d",&n);

   printf("Sum of digits in %d = %d",n,sum(n));

   return 0;

}