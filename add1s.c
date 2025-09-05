#include<stdio.h>
int main()
{
    int num,a,b,c,d,e;
	printf("Enter a 4 digit number: ");
scanf("%4d",&num);

a= num%10;
num = num/10;
b= num%10;
num = num/10;
c= num%10;
num = num/10;
d= num%10;
e = a+b+c+d;
printf("sum of all digit is: %d",e);
return 0;
}
