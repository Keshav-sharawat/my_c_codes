#include<stdio.h>
int main()
{
    int x,num,sum=0;
    printf("Enter the four digit number please=");
    scanf("%4d",&num);
    //first section for 1000 digit addition
    x=num/1000;
    sum=sum+(x+1)*1000;
    num=num%1000;
    // second section for 100 digit addition
    x=num/100;
    sum=sum+(x+1)*100;
    num=num%100;
    // third section for 10 digit addition
    x=num/10;
    sum=sum+(x+1)*10;
    num=num%10;
    x=num+1;
    // forth section for one's digit addition
    sum=sum+x;
    printf(" \n Result is=%d",sum);
    return 0;
    }