#include<stdio.h>
#include<conio.h>
int main()
{
 printf("Enter any number : ");
 scanf("%d", &n);
 for(i=1; i<=n; i++)
    fact = fact * i;
 printf("Factorial value of %d = %d",n,fact);
 return 0;
}
