#include<stdio.h>
int main()
{
	int x, year,day;
	printf("Enter the year");
	scanf("%d",&year);
	//if (year%4==0)
	 x=(((year/4)*366)+((year-(year/4))*365)-1);
	 day=x%7;
	 if(day==1)
	    printf("Day is monday");
	     else if(day==2)
	       printf("Day is tuesday");
	     else if(day==3)
	       printf("Day is wednesday");
	     else if(day==4)
	       printf("Day is thrusday");
	     else if(day==5)
	       printf("Day is friday");
	     else if(day==6)
	        printf("Day is Saturday");
	    else
	    printf("Day is Sunday");
	    return 0;
		}
