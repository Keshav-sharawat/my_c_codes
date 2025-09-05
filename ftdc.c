


#include<stdio.h>
int main(){

	int day;
	float a,b;
	printf("Enter the days=");
	scanf("%d",&day);
	if(day>=5)
	{
		a=day*2.5;
		b=a/100;
		printf("fine is =%f Rs.",b);
    }
		else if(day>5<=10){
				a=2.5+((day-5)*100);
				b=a/100;
				printf("fine is =%f Rs.",b);
			}
			else if(day>10){
			a=7.5+((day-10)*100);
			b=a/100;
			printf("Fine is =%f Rs.",b);
			}
		
	

			else 
			printf("Please submit 500 Rs. and book with your application");
		
	return 0;
}