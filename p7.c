#include<stdio.h>

int main()
 {
    /* want to create a program for doing addition of the digits of table of a given number 
    especially starting with a known number like for 8 adding 8,16,24,32,40,48,56,64,72,80,
    going with for loop */
    int n;
    int sum=0;
    int i=1;
    int d;
    printf("Enter the number please=");
    scanf("%d",&n);
    for(i=1;i<=10; i++)
    {
    d=i*n;
    printf("%d \n",d);
    sum+=d;
    }
    // expected output//
    printf("\n The addition of table of %d is=%d",n,sum); 
    return 0;
}