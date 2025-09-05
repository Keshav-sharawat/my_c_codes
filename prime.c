#include<stdio.h>
int main()
{
    int i=1,num,count=0,x;
    printf("Enter the number");
    scanf("%d",&num);
    while(i<=num)
    {
      x=num%i;
      if(x==0)
      {
        count=count+1;
      }
      i=i+1;
    }
     if(count==2)
     printf("number is prime");
     else
     printf(" number is not prime");    
      return 0;
}