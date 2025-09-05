#include<stdio.h>
int main()
{
 int n , first=0 , second=1 , next , i=0;
  printf("Enter the length of series please = \n");
 scanf("%d",&n);
   printf("\n Fibonacci Series for given length %d is :-\n" , n);
   for(i=0;i<n;i++)
   {
    printf("%d ", first);
    next = first + second;
    first = second;
    second = next;

   }
   return 0;
}