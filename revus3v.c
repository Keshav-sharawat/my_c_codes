#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a and b=");
    scanf("%d%d",&a,&b);
    printf("\n Before swapping value of a=%d",a);
    printf("\n Before swapping value of b=%d",b);
    c=a;
    a=b;
    b=c;
    printf("\n After swapping value of a=%d",a);
    printf("\n After swapping value of b=%d",b);
    return 0;
}