#include<stdio.h>
int main()
{
    int num,x,rev=0;
    // input section
    printf("Enter a 4 digit number=");
    scanf("%d",&num);
    // logic section
    // for replacing the one's digit to thousand 1 to 1000
    x=num%10;
    rev=rev+x*1000;
    num=num/10;
    // for replacing the ten's digit to hundred digit 10 to 100
    x=num%10;
    rev=rev+x*100;
    num=num/10;
    // for replacing the hundred's digit to ten's digit 100 to 10
    x=num%10;
    rev=rev+x*10;
    num=num/10;
    // final logic
    rev=rev+num;
    //output section
    printf("\n Reverse of given number =%d",rev);
    return 0;

}