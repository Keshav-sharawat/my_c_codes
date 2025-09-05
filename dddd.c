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
	if(a>b){
		if(a>c){
			if(a>d){
				 if(a>e){
					printf("A is largest");
				 }
				 else{
					printf("E is largest");
				}	
			 }
			 else
			    {
				 if(d>e){
					printf("D is largest");
				}
				else
				{
					printf("E is largest");
				}
			}
			
		}
		else{
			if(c>d){
				if(c>e){
					printf("C is largest");
				}
				else{
					printf("E is largest");
				}
			}
			else{
				if(d>e){
					printf("d is largest");
				}
				else{
					printf("E is largest number");
				}
			}
		}
	}
	else{
		if(b>c){
			if(b>d){
				if(b>e){
					printf("B is the largest number");
				}
				else{
					printf("E is the greatest number");
				}
			}
			else{
				if(d>e){
					printf("D is the largest number");
				}
				else{
					printf("E has highest value");
				}
			}
		}
		else{
			if(c>d){
				if(c>e){
					printf("C has highest value");
				}
				else{
					printf("E is greatest");
				}
			}
			else{
				if(d>e){
					printf("D has highest value");
				}
				else{
					printf("E is the largest and greatest number");
				}
			}
			
		}
		
	}
	return 0;
}
