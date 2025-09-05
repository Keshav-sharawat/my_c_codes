#include<stdio.h>
int main()
{
int n;
int sum=0;
printf("Please enter the number \n ");
scanf("%d",&n);
for(int i=1 ; i<=n ; i++)
{
    sum+=i;
}
printf("The sum of first +ve %d natural numbers is=%d",n,sum);
return 0;
}