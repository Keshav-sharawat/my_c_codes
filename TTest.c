#include<stdio.h>

 int main(){
	int num,sum,x;
	
	printf("Enter a 4 digit number ");
	scanf("%4d",&num);
	
	x = num % 10;
    sum = x * 1000;
    num = num / 10;

    x = num % 10;
    sum = sum + (x * 100);
    num = num / 10;

    x = num % 10;
    sum = sum + (x * 10);
    num = num / 10;

    x = num % 10;
    sum = sum + x;


	printf("%d",sum);
	return 0;
}

