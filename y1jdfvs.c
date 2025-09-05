#include<stdio.h>
int main()
{
    int year,a,d;
    printf("Enter the Year =");
    scanf("%d",&year);
    a=(((year/4)*366)+(year-year/4)*365 - 1);
    d=a%7;
    if(d==0)
     printf("Day is Sunday");
     else if(d==1)
      printf("Day is Monday");
     else if(d==2)
      printf("Day is Tuesday");
      else if(d==3)
      printf("Day is Wednesday");
      else if(d==4)
      printf("Day is Thursday");
      else if(d==5)
      printf("Day is Friday");
      else 
      printf("Day is Saturday");
     return 0;
}