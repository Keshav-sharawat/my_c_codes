#include<stdio.h>
int main()
{
    int day;
    float a,b,c;
    printf("Please enter the days after due date=");
    scanf("%d",&day);
    if(day<=5)
    {
        a=2.5*day;
        b=a/100;
        printf("\n Fine is =%f",b);
    }
    else
    {
       if(5<day<=10)
       {
         day=day-5;
         a=2.5+day*1;
         printf("\n Fine is=%f",a);
       }
       else
       {
         if(10<day<=14)
         {
            day=day-10;
            a=7.5+day*10;
            printf(" \n Fine is=%f",a);
         }
         else 
         {
           printf("/ please submit 500 Rs. fine and a application of late submission");
         }
       }
    }
    return 0;

}