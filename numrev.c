#include<stdio.h>
int main()
{
    //variable declaration  section
    int x,num,rev=0;
    //input section
    printf("Enter the 4 digit number = ");
    scanf("%4d",&num);
     // logic section
     // for reversing thousand's place
     x=num%10;
     rev=rev+x*1000;
     num=num/10;
     // for reversing hundred's  place
     x=num%10;
     rev=rev+x*100;
     num=num/10;
     // for reversing  ten's place
     x=num%10;
     rev=rev+x*10;
     num=num/10;
     // for reversing one's place
     x=num;
     rev=rev+x;
     printf("Reverse of given number is =%d",rev);
     return 0;
}