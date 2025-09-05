#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Please Enter the value of a=");
    scanf("%d",&a);
    printf("\nPlease Enter the value of b=");
    scanf("%d",&b);
    printf("\nPlease Enter the value of c=");
    scanf("%d",&c);
    printf("\nPlease Enter the value of d=");
    scanf("%d",&d);
    printf("\nPlease Enter the value of e=");
    scanf("%d",&e);
    printf("\nPlease Enter the value of f=");
    scanf("%d",&f);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                if(a>e)
                {
                    if(a>f)
                    {
                    printf("\n A is the largest number=%d",a);
                    }
                    else
                    {
                    printf("\n F is the largest number=%d",f);
                    }
                }
                else
                {
                   if(e>f)
                   {
                       printf("\n E is the largest number=%d",e);
                   }
                   else
                   {
                       printf("\n F is the largest number=%d",e);
                   }
                }
            }
            else
            {
                if(d>e)
                {
                    if(d>f)
                    {
                        printf("\n D is the largest number=%d",d);
                    }
                    else
                    {
                        printf("\n F is the largest number=%d",f);
                    }
                }
                else
                {
                    if(e>f)
                    {
                        printf("\n E is the largest number=%d",e);
                    }
                    else
                    {
                        printf("\n F is the largest number=%d",f);
                    }
                }
            }
        }
        else
        {
           if(c>d)
           {
              if(c>e)
              {
                  if(c>f)
                  {
                     printf("\n C is the largest number=%d",c);
                  }
                  else
                  {
                     printf("\n F is the largest number=%d",f);
                  }
              }
              else
              {
                 if(e>f)
                 {
                 printf("\n E is the largest number=%d",e);
                 }
                 else
                 {
                 printf("\nF is the largest number=%d",f);
                 }
              }
           }
           else
           {
             if(d>e)
             {
                 if(d>f)
                 {
                 printf("\n D is the largest number=%d",d);
                 }
                 else
                 {
                 printf("\n F is the largest number=%d",f);
                 }
             }
             else
             {
                if(e>f)
                {
                  printf("\n E is the largest number=%d",e);
                }
                else
                {
                  printf("\n F is the largest number=%d",f); 
                }
            }
           }
        }
    }
    else
    {
       if(b>c)
       {
          if(b>d)
          {
               if(b>e)
               {
                  if(b>f)
                  {
                    printf("\n B is the largest number=%d",b);
                  }
                  else
                  {
                    printf("\n F is the largest number=%d",f);
                  }
               }
               else
               {
                  if(e>f)
                  {
                    printf("\n E is the largest number=%d",e);
                  }
                  else
                  {
                    printf("\n F is the largest number=%d",f);
                  }
               }
          }
          else
          {
              if(d>e)
              {
                if(d>f)
                {
                   printf("\n D is the largest number=%d",d);
                }
                else
                {
                   printf("\n F is the largest number=%d",f);                     
                }
              }
              else
              {
                 if(e>f)
                 {
                    printf("\n E is the largest number=%d",e);
                 }
                 else
                 {
                    printf("\n F is the largest number=%d",f);
                 }
              }
          }
       }
       else
       {
          if(c>d)
          {
             if(c>e)
             {
                 if(c>f)
                 {
                    printf("\n C is the largest number=%d",c);
                 }
                 else
                 {
                    printf("\n F is the largest number=%d",f);
                 }
             }
             else
             {
                if(e>f)
                {
                    printf("\n E is the largest number=%d",e);
                }
                else
                {
                    printf("\n F is the largest number=%d",f);
                }
             }
          }
          else
          {
            if(d>e)
            {
                if(d>f)
                {
                  printf("\n D is the largest number=%d",d);
                }
                else
                {
                  printf("\n F is the largest number=%d",f);
                }
            }
            else
            {
              if(e>f)
              {
                printf("\n E is the largest number=%d",e);
              }
              else
              {
                printf("\n F is the largest number=%d",f);
              }
            }
          }
       }
    }
    return 0;
}