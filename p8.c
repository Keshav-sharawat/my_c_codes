#include <stdio.h>

int main() 
{
    int n,i=1;
    int long long f=1;
    printf("please enter the number for factorial= \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      f*=i;
    }
    // i think i messed up in for loop//
    printf("\n The factorial is %d",f);
    return 0;
}