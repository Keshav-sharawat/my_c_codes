#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("enter the value of a : ");
	scanf("%d", &a);
	printf("enter the value of b : ");
	scanf("%d", &b);
	printf("enter the value of c : ");
	scanf("%d", &c);
	printf("enter the value of d : ");
	scanf("%d", &d);
	printf("enter the value of e : ");
	scanf("%d", &e);
	if(a>b)
	{
       if(a>c)
	   {
          if(a>d)
		  {
             if(a>e)
			 {
                printf("\n 1. A is largest number");
			 }
			 else
			 {
                printf("\n 1. E is largest number");
			 }
		  } 
		  else
		  {
             if(d>e)
			 {
                printf("\n 1. D is largest number");
			 }
			 else
			 {
                printf("\n 2. E is largest number");
			 }
		  }        
	   }
	   else
	   {
          if(c>d)
		  {
              if(c>e)
			  {
                 printf("\n 1. C is largest number");
			  }
			  else
			  {
                 printf("\n 3. E is largest number");
			  }
		  }
		  else
		  {
               if(d>e)
			   {
                  printf("\n 2. D is largest number");
			   }
			   else
			   {
                  printf("\n 4. E is largest number");
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
                 printf("\n 1. B is largest number");
			  }
			  else
			  {
                 printf("\n 5. E is largest number");
			  }
		   }
		   else
		   {
               if(d>e)
			   {
                 printf("\n 3. D is largest number");
			   }
			   else
			   {
                 printf("\n 6. E is largest number");
			   }
		   }
	   }
	   else
	   {
         if (c>d)
		 {
			if(c>e)
			{
               printf("\n 2. C is largest number");
			}
			else
			{
               printf("\n 7. E is largest number");
			}
		 }
		 else
		 {
            if(d>e)
			{
               printf("\n 4. D is largest number");
			}
			else
			{
               printf("\n 8. E is largest number");
			}
		 }
		 
	   }
	}
return 0;
}
	
	