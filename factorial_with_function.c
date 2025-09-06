#include <stdio.h>
float fac(int a);
int a;
int main()
{
    printf("Enter the number please: \n");
    scanf("%d", &a);
    printf("The factorial of %d is %f", a, fac(a));
    return 0;
}
float fac(int a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }
    return a * fac(a - 1);
}