#include<stdio.h>
int main()
{
    int a,b,c,d,e,num,choice;
    //choice declaration
    printf("Please take your choice from given below: ");
    printf(" \n  1. Add 1 and 4 digit");
    printf(" \n  2. Add 2 and 3 digit");
    printf(" \n  3. Add 1 and 3 digit");
    printf(" \n  4. Add 1 and 2 digit");
    printf(" \n  5. Add 2 and 4 digit");
    printf(" \n  6. Add all digits");
    printf(" \n  please enter your choice=");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
               printf(" \n Enter a 4 digit number=");
               scanf("%4d",&num);
               a=num/1000;
               b=num%10;
               c=a+b;
               printf("Addition is=%d",c);
               break;
        case 2:
               printf(" \n Enter a 4 digit number=");
               scanf("%4d",&num); 
               num=num%1000;
               a=num/100;
               num=num%100;
               b=num/10;
               c=a+b;
               printf("Addition is =%d",c);
               break;
        case 3:
               printf(" \n Enter a 4 digit number=");
               scanf("%4d",&num);
               a=num/1000;
               num=num%100;
               b=num/100;
               c=a+b;
               printf("Addition is=%d",c);
               break;
        case 4:
               printf(" \n Enter a 4 digit number=");
               scanf("%4d",&num);
               a=num/1000;
               b=num/100;
               c=a+b;
               printf("Addition is =%d",c);
               break;  
        case 5:
               printf(" \n Enter a 4 digit number=");
               scanf("%4d",&num);
               num=num%1000;
               a=num/100;
               b=num%10;
               c=a+b;
               printf("Addition is =%d",c);
               break;
        case 6:
               printf(" \n Enter a 4 digit number=");
               scanf("%4d",&num);
               a=num/1000;
               b=num/100;
               c=num/10;
               d=num%10;
               e=a+b+c+d;
               printf("Addition is =%d",e);
               break;
    }
    return 0;
}