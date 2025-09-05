#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter the value of =a");
	scanf("%d",&a);
	printf("\n Enter the value of b=");
	scanf("%d",&b);
	printf("\n Enter the value of c=");
	scanf("%d",&c);
	printf("\nEnter the value of d=");
	scanf("%d",&d);
	printf("\n Enter the value of e=");
	scanf("%d",&e);
    // main section
    // for a b c d e
    if(a>b){
    	//c d e
    	if(a>c)
		// d e 
    	{
    		if(a>d)   //e
    		   {
    			if(a>e)
				printf(" \n A is largest");
			    }
			    else
			    {
				print(" \n E is largest");
			    }
		}
		else{
		if(c>d){
			if(c>e){
				printf("\n C is largest");
			}
			else{
			 printf(" \n E is largest");
			 }
		}
			else
			{
				}	
		}
	}
	// for b c d e
	else
	{
	if(b>c){
		if(b>d){
			if(b>e){
			printf("\n B is largest ");
			}
			else
			print("n E is largest");
		}
		else
		{
			if(d>e){
			 printf("\n D is largest");
			 }
		}
	}
	else	
	
}
