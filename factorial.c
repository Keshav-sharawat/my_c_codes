#include<stdio.h>
int main()
{
    int n;
    unsigned long long factorial = 1;
    printf("please enter the number");
    scanf("%d",&n);
    if(n<0)
    {
       printf("please enter a positive interger");
    }
       else
    {
       for(int i=1;i<=n;i++)
       {
        factorial*=i;
       }
       printf("\n factorial of given number is =%llu",factorial);
    }
    return 0; 
}