#include<stdio.h>
int main(){
    int x,num,sum=0;
    printf("Enter the 4 digit number = \n");
    scanf("%4d",&num);
    x=num/1000;
    sum=sum+x;
    num=num%1000;
    num=num%100;
    x=num/10;
    sum=sum+x;
    printf("Addition of first and last digit=%d",sum);
    return 0; 
}