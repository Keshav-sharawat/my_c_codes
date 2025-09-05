#include<stdio.h>
int main()
{
    int x,num,sum=0;
    printf("Enter the 4 digit number= \n ");
    scanf("%d",&num);
    x=num%10;
    sum=sum+x;
    num=num/10;

    x=num%10;
    sum=sum+x;
    num=num/10;

    x=num%10;
    sum=sum+x;
    num=num/10;
    sum=sum+num;
    printf("Sum of digits of four digit number is =%d",sum);
return 0;
}
